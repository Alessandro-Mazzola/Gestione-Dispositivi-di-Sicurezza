/*
 * TelecameraAllarmata.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include "../Dispositivo/TelecameraAllarmata.h"

#include <string>
#include <iostream>

#include "Telecamera.h"
using namespace std;


TelecameraAllarmata::TelecameraAllarmata(string n, bool s, string c, int costo, string modello):
		Telecamera(n, s, c, costo, modello), Allarme(n, s, c),
		DispositivoSicurezza(n,s,c,TelecameraAllarmata::getTipo()){

}

TelecameraAllarmata::~TelecameraAllarmata(){
	//cout<<"Distruggo: "<<this->getNome()<<" ..."<<endl;
}

void TelecameraAllarmata::Controllo(){
}


// metodo che mi serve per risolvere il name clash di "Produttore"
string TelecameraAllarmata::getProduttoreTA(){
	return Telecamera::getProprietario();
}

//override del metodo purevirtual
// devo chiamarlo anche qui perch� altrimenti avrei name clash
string TelecameraAllarmata::getNomeClasse(){
		return Telecamera::getNomeClasse();
	}

string TelecameraAllarmata::toString() {
	// chiamo quello di telecamera perch� TelecameraAllarmata non ha campi in pi� rispetto a
	// telecamera poich� allarme non ha campi, ma solo metodi.
	return Telecamera::toString();
}


char TelecameraAllarmata::getTipo() {
	return 'p';
}



