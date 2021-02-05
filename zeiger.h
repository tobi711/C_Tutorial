/*
 * zeiger.h
 *
 *  Created on: 05.02.2021
 *      Author: Tobi
 */

#ifndef ZEIGER_H_
#define ZEIGER_H_

//============================================================================
// Name        : Tests_V_1.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


struct macs {
		int mac_adr;
} speicher[5];



void ausgabe_macs(macs speicher){

	cout << " ->>> ID MAC " << speicher.mac_adr << endl;
}

struct arbeiter {
	int gehalt;
	int alter;
} handwerker [3]; //objekt

void ausgabe_arbeiter(arbeiter name){
	cout << " ->>> Gehalt " << name.gehalt << endl;
	cout << " ->>> alter " << name.alter << endl;
}

struct Kunde {
	int nummer;
} kundendaten [2];

void intit_besucher(){

	kundendaten[0].nummer = 3333;
	kundendaten[1].nummer = 2222;
}

int return_besucher(){

	int kundennr;
	kundennr = kundendaten[0].nummer;
	return kundennr;
}


void ausgabe_kunden(Kunde name){
	cout << " ->>> nummer " << name.nummer << endl;
}

int main() {

	int mac_buf [3] = {1,2,3};

	for(int i = 0; i < 3; i++){
		speicher[i].mac_adr = mac_buf[i];
	}

	for(int i = 0; i < 5; i++){
		cout << "Index Stelle: " << i;
		ausgabe_macs(speicher[i]);
	}

	int gehalter [3] = {2222,1111,4444};

	handwerker[0].gehalt =1111;
	handwerker[1].gehalt =3333;

	ausgabe_arbeiter(handwerker[0]);
	ausgabe_arbeiter(handwerker[1]);


	intit_besucher();

	ausgabe_kunden(kundendaten[0]);

	int besuch;
	besuch = return_besucher();

	cout << "nummer besucher " << besuch << endl;


	int wert;
	int *pwert;
	int *pZahl;

	wert = 10;


	cout << "wert " << wert << endl;

	pwert = &wert;
	cout << "Adresse von wert " << pwert << endl;

	pZahl = pwert;
	cout << "Zahl von pwert " << *pZahl << endl;





    return 0;

}





#endif /* ZEIGER_H_ */
