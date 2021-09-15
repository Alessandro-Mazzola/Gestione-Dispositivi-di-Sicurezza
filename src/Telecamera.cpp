/*
 * Telecamera.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include <string>
#include <iostream>

using namespace std;

#include "Telecamera.h"

Telecamera::Telecamera(string n, bool s, string c, int costo, string modello) :
		DispositivoSicurezza(n, s, c, Telecamera::getTipo()), Produttore(costo, modello){
	proprietario = "Nessuno";
	rilevaMovimento = false;
	posizione = Nord;
}

Telecamera::Telecamera(string id, string n, bool s, string c, Posizione pos, int costo, string modello) :
		DispositivoSicurezza(n, s, c, Telecamera::getTipo()), Produttore(costo, modello) {
	proprietario = "Nessuno";
	rilevaMovimento = false;
	posizione = pos;
}

Telecamera::Telecamera(string id, string n, bool s, string c, Posizione pos, string pro, int costo, string modello) :
		DispositivoSicurezza(n, s, c, Telecamera::getTipo()), Produttore(costo, modello) {
	proprietario = pro;
	rilevaMovimento = false;
	posizione = pos;
}

Telecamera::~Telecamera() {
	cout<<"Distruggo: "<<this->getNome()<<" ..."<<endl;
}
string Telecamera::getPosizione() {
	switch(this->posizione){
	case Nord: return "Nord";
	case Sud: return "Sud";
	case Est: return "Est";
	case Ovest: return "Ovest";
	default: return "errore";

	}
}

void Telecamera::setPosizione() {

}

bool Telecamera::getRilevaMovimento() {
	return this->rilevaMovimento;
}

string Telecamera::getProprietario() {
	return this->proprietario;
}

//override del metodo purevirtual
string Telecamera::getNomeClasse() {
	return "Telecamera";
}

char Telecamera::getTipo(){
		return 't';
	}

