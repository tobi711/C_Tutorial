#include <iostream>
using namespace std;

int firstFunction(){
    int a = 2;
    int b = 4;
    return a + b;
}

float second(float a, float b){
    return a + b; 
}

int calculator(){
    int a, b;
    int result;

    cout << "\nType a number a ->\t";
    cin >> a;
    cout << "\nType a number b ->\t";
    cin >> b;

    result = a + b; 
    return result;  
}

void newline(){
    cout << "\n+++++++++++++++++++++++++++++++++" << endl;
}

void hello(){
    cout << "\n Header File funktioniert" << endl;
}

void loops(){
    for(int i = 0; i <= 6; i++){
        cout << "\nHello = " << i; 
    }
}

void wdh(){
    int i = 0;

    while(i <= 10){
        cout << "\nWhile Loop " << i;
        i++;

    }
    cout << "\nWhile Loop vorbei "; 
}

