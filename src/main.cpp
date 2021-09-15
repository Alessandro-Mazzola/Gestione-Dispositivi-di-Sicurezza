//============================================================================
// Name        : Dispositivo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Allarme.h"
#include "SensoreRaggInfrarossi.h"
#include "Telecamera.h"
#include "TelecameraAllarmata.h"

int main() {
	// --- ALLARME ---
	cout<<"----ALLARME----"<<endl;
	Allarme a1 = Allarme("allarme1", false, "Cucina");
	cout << a1.getProprietario() << endl;
	a1.emettiSuono();
	a1.spegni();

	// ---- SENSORE ----
	cout<<"----SENSORE----"<<endl;
	SensoreRaggInfrarossi s1 = SensoreRaggInfrarossi("sensore1", false,"Cucina");
	cout<< "Chiamata al metodo virtual pure: " << s1.getNomeClasse() << endl;
	s1.stampaCheck();
	s1.setCheck();
	s1.stampaCheck();


	// ---TELECAMERA ---
	cout<<"----TELECAMERA----"<<endl;
	Telecamera t1 = Telecamera("telecamera1", false, "Cucina", 10, "Sony");
	cout << "Modello: " << t1.getModello() << endl;
	cout<<"Posizione: "<<t1.getPosizione()<<endl;

	// ---- TELECAMERA ALLARMATA ----
	cout<<"----TELECAMERA ALLARMATA----"<<endl;
	//TelecameraAllarmata ta1 = TelecameraAllarmata();
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
