
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <time.h>

using namespace std;



void besucher_gebaude (int mac []){

	int counter  = 0;

	for(int i = 0; i < 5; i++){
		cout << mac[i] << endl;
		counter++;
	}
	cout << "anzahl an mac adressen " << counter << endl;
}

void vorgebaude (int mac1 [], int mac2 []){

	for(int i = 0; i < 5; i++){
		if(mac1[i] == mac2[i]){
			cout << " yes" << endl;
		}
		else
			cout << "not in side " << endl;
	}
}

void bitshift (){

	int i = 256, b = 4;

	// 8 = 1000 >> 2 = 0010 >> 3 = 0001
	// 4 = 0100 >> 1 = 0010= 2dec
	// 1000 0000 >> 8 = 0000 0001
	// b 4 = 0100 & 1111 1111

	i = i >> 8;
	b = b & 0xFF;

	cout << i << endl;
	cout << b << endl;

	cout << (char) 0x42 << endl;
}

struct  {
	char name[40];
	int age;
} person, person_copy;


void memorytry (){

	char myname [] = "tobi weee";

	memcpy (person.name, myname,strlen(myname)+1);
	person.age = 27;

	printf("\nperson orig: %s und alter %i ", person.name, person.age);

	memcpy (&person_copy, &person, sizeof(person));

	printf("\nperson_copy: %s, %d \n", person_copy.name, person_copy.age );
}

void copystring (){

	char vorname[] = "Tobi";
	char nachname[] = "Wee";

	char speicher[20];

	strncpy(speicher, vorname, sizeof(vorname)+10);

	printf("\nori Vorname %s ", vorname);
	printf("\nVorname = %s ", speicher);
	puts(speicher);

	 char str1[30];
	 char str2[20];
	 strcpy (str1,"To be ");
	 strcpy (str2,"or not to be");
	 strncat (str1, str2, sizeof(str2));
	 puts (str1);

	 int cx = snprintf(str1, 6, "Lol s %d is %d",60,60/2);

	 printf("\ncx ist gleich %i",cx);
	 snprintf(str1+cx,10-cx,"shit %d", 60/2/2);
	 puts(str1);

}

void decoder (){

	// Device ids
	int id [] = {1,2,3,4,5};

	// 1 Byte Mask 1111 1111 = FF = 255
	int mask = 255;

	int device_no;

	for(int i = 0; i < sizeof(id)/sizeof(id[0]); i++){

		printf("\nAusgabe id =  %i ", id[i]);
		device_no = id[i] & mask;
		printf("with mask %i ", device_no);
	}
}

struct bes {
	int mac_adr;
	char an_zeit [20];

} besucher[5];

void besuch(){

	besucher[1].mac_adr = 3;
	char zeit[] = "11-11-11";

	int macs [5] = {2,4,5,6,7};
	string zeiten [5] = {"11-11-11","11-12-11","11-15-11","11-16-11","11-17-11"};


	strncpy(besucher[1].an_zeit, zeit, sizeof(besucher[1].an_zeit));
	printf("\nori zeit %s ", besucher[1].an_zeit);

	for(int i = 0; i < sizeof(macs)/sizeof(macs[0]); i++){

		cout <<  "\n " << zeiten[i] << endl;

		besucher[i].mac_adr = macs[i];
		printf("\nOri mac adr  %i ", besucher[i].mac_adr);
	}
}


