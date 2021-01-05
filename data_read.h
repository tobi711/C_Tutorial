#include <iostream>
#include <string>
#include <fstream>

using namespace std;


struct visitor {

    int device_id;
    string mac_adr;
    string arrival_time; 
};


void write(){

    visitor besucher1; 

    besucher1.device_id = 1;
    besucher1.mac_adr = "2312324";
    besucher1.arrival_time = "12-33-21";

    ofstream out;
    out.open("test.txt");
    out << "Besucherstromanalyse Tobias Werz" << endl;

    out << "\nDevice ID: " << besucher1.device_id << "\nMac Adresse: " << besucher1.mac_adr <<
        "\nAnkuftszeit " << besucher1.arrival_time << endl; 

    out.close();

    ifstream in("test.txt");
    if (in.is_open() ){
        string line; 
        while(getline (in, line )) {
            cout << line << endl; 
        }
        in.close();
    }
    else {
        cout << "File didn't exist " << endl; 
    }
}