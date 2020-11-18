
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



int main() {

    // More comments to this codeproject 
    /* more comment */ 


    cout << "Hello World";

    std::cout << "\nFirst Change";

    cout << "\n\nI learn c++ again";

    cout << "\nNew line of Code every day" << endl; 
 
    cout << "Result of the Function :->  " << firstFunction() << endl; 
    cout << "Result of the second  Function :->  " << second(8.5,3.5); 


    return 0;
}