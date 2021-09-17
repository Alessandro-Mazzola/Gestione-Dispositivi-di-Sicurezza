//============================================================================
// Name        : Dispositivo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
using namespace std;
#include "../Dispositivo/Allarme.h"
#include "../Dispositivo/SensoreRaggInfrarossi.h"
#include "../Dispositivo/Telecamera.h"
#include "../Dispositivo/TelecameraAllarmata.h"

#include "../gestoreDispositivo/gestoreDispositivo.h"
#include "../LineaComando/Menu.h"
int main() {
	/*	// --- ALLARME ---
	 cout<<"----ALLARME----"<<endl;
	 Allarme a1 = Allarme("allarme2", false, "Cucina", "Stefano");
	 //a1.emettiSuono();
	 a1.accendi();
	 cout<<a1.toString()<<endl;
	 //cout<<endl<<a2.toString()<<endl;
	 //a1.emettiSuono();

	 // ---- SENSORE ----
	 cout<<"----SENSORE----"<<endl;
	 SensoreRaggInfrarossi s1 = SensoreRaggInfrarossi("sensore1", false,"Cucina", 15.0);
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


	 DispositivoSicurezza *d4 = new SensoreRaggInfrarossi("sensore1", false, "Cucina", 10.0);
	 DispositivoSicurezza *d1 = new Allarme("giov", true, "camera1");
	 DispositivoSicurezza *d2 = new TelecameraAllarmata("TA2", false, "Sala", 10, "Sony");
	 DispositivoSicurezza *d3 = new Telecamera("telecamera1", true, "Cucina", 10, "Sony");

	 GestoreSicurezza::instance().aggiungiDispositivo(d1);
	 GestoreSicurezza::instance().aggiungiDispositivo(d2);
	 GestoreSicurezza::instance().aggiungiDispositivo(d4);
	 GestoreSicurezza::instance().stampaDispositiviTotali();
	 //GestoreSicurezza::instance().SegnalaMovimento("a2");
	 //GestoreSicurezza::instance().AemettiSuono("a2");
	 //g1.spegniDispositivi();
	 cout << "-------------------------" << endl;
	 GestoreSicurezza::instance().rimuoviDispositivoID("c1");
	 GestoreSicurezza::instance().stampaDispositiviTotali();
	 cout << "-------------------------" << endl;

	 GestoreSicurezza::instance().accendiDispositivo("p3");
	 GestoreSicurezza::instance().stampaDispositiviTotali();
	 cout << "-------------------------" << endl;

	 GestoreSicurezza::instance().SegnalaMovimento("s1");
	 GestoreSicurezza::instance().stampaDispositiviTotali();
	 GestoreSicurezza::instance().AemettiSuono("s1");

	 //--------------------------------------------------------------------------

	 //GestoreSicurezza::instance().stampaDispositiviAccesi();

	 //GestoreSicurezza::instance().SpegniDispositivo("s1");
	 //GestoreSicurezza::instance().accendiDispositivo("s1");
	 //GestoreSicurezza::instance().stampaDispositiviAccesi();


	 //Telecamera** temp = dynamic_cast<Telecamera**>(d3);


	 //	g1.rimuoviDispositivoID("a2");
	 //	cout << "-------------------------" << endl;
	 //	g1.stampaDispositiviTotali();
	 //	g1.rimuoviDispositivo(d4);
	 //	cout << "-------------------------" << endl;
	 //	g1.stampaDispositiviTotali();

	 */

	Menu m1 = Menu();
	m1.stampaInizio();
	m1.showMenu();
	cout << "\n\nCHIUSURA PROGRAMMA....";

	return 0;
}
