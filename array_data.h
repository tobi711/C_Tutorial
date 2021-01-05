#include <iostream>
#include <string>


using namespace std;


void visitor_data(){

    int mac_adr [10];
    string arrival_time [10];

    for( int i = 0; i <10 ; i++) {

        mac_adr[i] = i + 2; 
        arrival_time[i] = "hh-mm-ss";
        

    }

    for (int j = 0; j < 10; j++) {
        cout << mac_adr[j] << "\n " << arrival_time[j] << endl; 
    }


}