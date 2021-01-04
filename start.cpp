
#include <iostream>

#include "function.h"
#include "visitor.h"

using namespace std;


int main() {

    cout << "Hello World";

    std::cout << "\nFirst Change";

    cout << "\nNew line of Code every day" << endl; 
 
    //cout << "Result of the Function :->  " << firstFunction() << endl; 
    //cout << "Result of the second  Function :->  " << second(8.5,3.5); 

    //cout << "\nErgebnis =\t" << calculator();

    //loops(); 
    newline();
    hello();
    //wdh();
    newline();
    
    visitor_print();
    visitor_data();
    

    rand_number();
    cout << "\nvisitor" <<endl;
    visitor_array();



    return 0;
}

