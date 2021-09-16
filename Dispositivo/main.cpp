//============================================================================
// Name        : Dispositivo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "../Dispositivo/Allarme.h"
#include "../Dispositivo/SensoreRaggInfrarossi.h"
#include "../Dispositivo/Telecamera.h"
#include "../Dispositivo/TelecameraAllarmata.h"

int main() {
	// --- ALLARME ---
	cout<<"----ALLARME----"<<endl;
	Allarme a1 = Allarme("allarme2", false, "Cucina", "Stefano");
	//a1.emettiSuono();
	a1.accendi();
	cout<<a1.toString()<<endl;
	//cout<<endl<<a2.toString()<<endl;
	//a1.emettiSuono();

	// ---- SENSORE ----
	cout<<"----SENSORE----"<<endl;
	SensoreRaggInfrarossi s1 = SensoreRaggInfrarossi("sensore1", false,"Cucina");
	cout<< "Chiamata al metodo virtual pure: " << s1.getNomeClasse() << endl<<endl;
	cout<<s1.toString()<<endl;	s1.setCheck();
	cout<<endl<<s1.stampaCheck()<<endl;
	Produttore p = Produttore(10, "Epson");
	cout<<endl<<s1.stampaModelloProduttore(p)<<endl;;


	// ---TELECAMERA ---
	cout<<"----TELECAMERA----"<<endl;
	Telecamera t1 = Telecamera("telecamera1", false, "Cucina", 10, "Sony");
	cout<<t1.toString()<<endl;
	s1.setCheck();
	cout<<endl<<endl;
	cout << "Modello: " << t1.getModello() << endl;
	cout<<"Posizione puntata: "<<t1.getPosizione()<<endl;
	t1.accendi();
	t1.setPosizione();
	cout<<"Posizione puntata: "<<t1.getPosizione()<<endl;


	// ---- TELECAMERA ALLARMATA ----
	cout<<"----TELECAMERA ALLARMATA----"<<endl;
	TelecameraAllarmata ta1 = TelecameraAllarmata("TA2", false, "Sala", 10, "Sony");
	cout<<ta1.toString()<<endl;
	ta1.accendi();
	cout<<ta1.toString()<<endl;
	ta1.setPosizione();
	cout<<ta1.toString()<<endl;

	//fine prova main

	return 0;
}
