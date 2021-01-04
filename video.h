//============================================================================
// Name        : Tests_V_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


struct videos {
    int laenge;
    string autor;
};

void printVideo (struct videos *vid);


void videothek() {

    struct videos vid1;
    vid1.laenge = 100;
    vid1.autor = "Peter Mueller";

    printVideo( &vid1);

}

void printVideo (struct videos *vid){

	cout << " Laenge amk : " << vid->laenge << endl;
	cout << " Autor amk : " << vid->autor << endl;

}

