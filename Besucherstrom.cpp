//============================================================================
// Name        : Besucherstrom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <sstream>

using namespace std;

#define LEN 4

// 1) Funktion gebe Anzahl an Personen im Gebäude aus
// Alle die Reingehen müssen erfasst werden

// Besucher ID bilden aus MAC Adresse + Zeit

// Quelle aus Mac Adressen
// Struct mit MAC + Zeit

struct besucher{
	string mac;
	string zeit;
} personen[LEN];

// ID = (MAC,Zeit) z.B. MAC= 1421 Zeit="11-15-30"
// --->> ID = 1421111530 ?
// HEX: MAC= 2 Byte 0E 15 = 0000 1110 0001 0101
// HEX: Zeit = 3 Byte 0B 0F 1E = 0000 1011 0000 1111 0001 1110
// 5 Byte Payload pro Besucher

void ausgabe_besucher_eingang(besucher person){
	cout << "Eingang Besucher" << endl;
	cout << "ID MAC " << person.mac << " und die erfasste Zeit -> ";
	cout << "Zeit " << person.zeit << "\n";
}

void ausgabe_besucher_ausgang(besucher person){
	cout << "Ausgang Besucher" << endl;
	cout << "ID MAC " << person.mac << " Ausgangszeit -> ";
	cout << "Zeit " << person.zeit << "\n";
}

void ausgabe_besucher_vor(besucher person){
	cout << "Vor dem Eingang Besucher" << endl;
	cout << "ID MAC " << person.mac << " Ankunftszeit -> ";
	cout << "Zeit " << person.zeit << "\n";
}

void ausgabe_besuchertag (besucher person){
	cout << "Gesamt Besucher Daten" << endl;
	cout << "ID MAC " << person.mac << endl;
}

int compare(string a,string b){

    for(int i=0; a[i]!='\0'; i++){
        if(a[i] != b[i])
            return 0;
    }
    return 1;
}

void besucher_anlegen(){

	// Wer reinkommt muss auch rauskommen
	string mac_speicher [LEN] = {"1421","2222","3333","2111"};
	string zeit_speicher [LEN]= {"11-15-30","11-20-35","11-30-00","11-35-15"};

	string mac_speicher_out [LEN] = {"1111","2222","3333","2111"};
	string zeit_speicher_out [LEN]= {"11-40-30","11-45-35","11-50-00","11-55-00"};

	string mac_vor_geb [LEN] = {"1421","2222","3333","5666"};
	string zeit_speicher_vor [LEN]= {"11-13-30","11-18-35","11-28-00","11-33-15"};

	int i,counter;
	//Eingang
	for(i=0; i < LEN; i++){
		cout << "Eingang MACS " << mac_speicher[i] << endl;
		personen[i].mac = mac_speicher[i];
		personen[i].zeit = zeit_speicher[i];
	}
	//Besucherzähler
	counter=0;
	for(i=0; i < LEN; i++){
		ausgabe_besucher_eingang(personen[i]);
		counter++;
	}
	cout << "\nAktuelle Anzahl an Personen im Gebäude -> " << counter << "\n" <<endl;

	//Personen verlassen Gebäude wieder
	for(i=0; i < LEN; i++){
		cout << "Ausgangs MACS " << mac_speicher_out[i] << endl;
		personen[i].mac = mac_speicher_out[i];
		personen[i].zeit = zeit_speicher_out[i];
	}
	//Ausgang
	for(i=0; i < LEN; i++){
		ausgabe_besucher_ausgang(personen[i]);
	}

	//wer wurde am Eingang nicht entdeckt?
	counter = 0;
	int anzahl_besucher = 0;
	for(i=0; i < LEN; i++ ){
		bool richtig = false;
		richtig = compare(mac_speicher[i],mac_speicher_out[i]);

		if(richtig == true){
			cout << "War in Eingang und Ausgang" <<endl;
			cout << "MAC Adresse = " << mac_speicher[i] << endl;
			anzahl_besucher++;
		}
		else {
			cout << "\nNoch im Gebäude = " << mac_speicher[i] << endl;
			counter++;
		}
	}
	cout << "\nAnzahl an Personen die das Gebäude NICHT verlassen haben = " << counter << "\n" <<endl;

	// Prozent an Personen die in das Gebäude eintreten
	// ermittle Anzahl an gesamt MACs
	// counter Liste 1 und Liste 2
	// Berechne Prozentzahl 2/100 = 2 %

	//Anlegen der Liste vor Gebäude
	for(i=0; i < LEN; i++){
		cout << "VOR Gebäude MACS " << mac_vor_geb[i] << endl;
		personen[i].mac = mac_vor_geb[i];
		personen[i].zeit = zeit_speicher_vor[i];
	}
	//Vor Gebäude
	for(i=0; i < LEN; i++){
		ausgabe_besucher_vor(personen[i]);
	}
	//Bestimmen der Personen vor dem Gebäude
	counter = 0;
	anzahl_besucher = 0;
	for(i=0; i < LEN; i++ ){
		bool richtig = false;
		richtig = compare(mac_speicher[i],mac_vor_geb[i]);

		if(richtig == true){
			cout << "War vor und in dem Gebäude" << " MAC Adresse = " << mac_speicher[i] << endl;
			anzahl_besucher++;
		}
		else {
			cout << "\nNur vor Gebäude = " << mac_vor_geb[i] << endl;
			counter++;
		}
	}

	cout << "\nAnzahl an Besucher die in das Gebäude abgebogen sind ->  " << anzahl_besucher << endl;
	cout << "Anzahl an Personen die das Gebäude NICHT betreten haben = " << counter <<endl;

	float prozent;
	prozent = (float(anzahl_besucher) / float(LEN)) * 100 ;

	cout << "Prozentsatz an Personen die in das Gebäude abgebogen sind " << prozent << " %" << endl;

	//Prozentsatz an Personen die nicht in das Gebäude eintreten Anzahl an Personen


}

void besucher_gesamt(){
	//ermittle gesamte Besucherzahl an einem Tag
	//MAC adressen müssen eizigartig sein

	string mac_speicher [10] = {"1421","2222","3333","2111","2424","4323","5343","1421"};

	int i,j,counter;

	for(i=0; i < 8; i++){
		cout << "Besucher MACS " << mac_speicher[i] << endl;
		personen[i].mac = mac_speicher[i];
	}

	string buff = "";
	int doublecounter, minus_counter = 0;
	counter=0;

	for(i=0; i < 8; i++){
		buff = personen[i].mac;
		ausgabe_besuchertag(personen[i]);
		counter++;
		doublecounter = 0;

		for(j=0; j < 8; j++ ){
			if(buff != personen[j].mac){
				cout << "unique " << buff << endl;
			}
			else if(buff == personen[j].mac){
					cout << "double" << buff <<  endl;
					doublecounter++;
					cout << doublecounter <<endl;
				}
		}
		if(doublecounter == 1){
			cout << "OKE eigene Adresse in der Liste " << buff << endl;
		}// sonst muss es gelöscht werden die doppelten Einträge
		else if (doublecounter > 1){
			minus_counter++;
			cout << "lösche mac adresse einmal " << buff << endl;
		}
	}
	cout << "\nBesucherzahl von ganzem TAG -> " << counter - minus_counter << "\n" << endl;
}


int main() {

	//besucher_anlegen();

	besucher_gesamt();

	return 0;
}
