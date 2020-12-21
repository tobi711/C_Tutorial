
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
    return;
}


void loops(){

    for(int i = 0; i <= 7; i++){
        cout << "\nHello = " << i; 
    }
    return;
}



int main() {

    // More comments to this codeproject 
    /* more comment */ 

    cout << "Hello World";

    std::cout << "\nFirst Change";

    cout << "\n\nI learn c++ again";

    cout << "\nNew line of Code every day" << endl; 
 
    cout << "Result of the Function :->  " << firstFunction() << endl; 
    cout << "Result of the second  Function :->  " << second(8.5,3.5); 

    //cout << "\nErgebnis =\t" << calculator();
    newline();

    loops(); 



    return 0;
}