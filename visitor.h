#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void visitor_print(){
    cout << "\n Erster Besucher kommt" << endl;
}

struct visitor {

    int device_id;
    string mac_adr;
    string arrival_time; 
};

void visitor_data (){

    visitor besucher1;

    besucher1.device_id = 1;
    besucher1.mac_adr = "32323";
    besucher1.arrival_time = "12-33-22";

    cout << besucher1.device_id <<endl;
    cout << besucher1.mac_adr <<endl;
    cout << besucher1.arrival_time <<endl;
};

int * rand_number(){

    int i = 0;
    static int array_rand_no [10];

    while( i++ < 10){
        int r = (rand() % 100) + 1;
        array_rand_no[i] = r;  
        cout << "random" << array_rand_no[i] << " "; 
    }
    return array_rand_no; 
}

void visitor_array(){

    int n,result=0;

    int device_id [10];
    int mac_adr [10];
    string ari_time [10];

    int *mac;

    mac = rand_number(); 

    for( n=0; n<10; n++){
        device_id[n] = n;
        mac_adr[n] = n + mac[n]; 
        ari_time[n] = "13-55-12";

        cout << "\n device \t" <<  device_id[n];
        cout << "\n mac \t " <<  mac_adr[n]; 
        cout << "\n Time \t " <<  ari_time[n]; 
    }
}

