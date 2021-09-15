/*
 * Allarme.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include <string>
#include <iostream>
#include "Allarme.h"
using namespace std;

Allarme::Allarme(string n, bool s, string c) :
		DispositivoSicurezza(n, s, c, Allarme::getTipo()) {
	proprietario = "Nessuno";
}

Allarme::Allarme(string n, bool s, string c, string pro) :
		DispositivoSicurezza(n, s, c, Allarme::getTipo()) {
	proprietario = pro;
}

Allarme::~Allarme() {
	cout<<"Distruggo: "<<this->getNome()<<" ..."<<endl;
}

void Allarme::emettiSuono() {
	if(this->getStatoDispositivo())
		cout<<"BEEEP!! BEEP!!"<<endl;
	else
		cout<<this->getNome()<<" spento. NEcessario accenderlo!"<<endl;
}

string Allarme::getProprietario() {
	return proprietario;
}

//override del metodo purevirtual
string Allarme::getNomeClasse() {
	return "Allarme";
}

char Allarme::getTipo() {
	return 'a';
}

