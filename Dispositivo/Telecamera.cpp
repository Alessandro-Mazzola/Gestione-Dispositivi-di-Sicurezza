/*
 * Telecamera.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include <string>
#include <iostream>
#include <conio.h>
using namespace std;

#include "Telecamera.h"

Telecamera::Telecamera(string n, bool s, string c, int costo, string modello) :
		DispositivoSicurezza(n, s, c, Telecamera::getTipo()), Produttore(costo, modello){
	proprietario = "Nessuno";
	rilevaMovimento = false;
	posizione = Nord;
}

Telecamera::Telecamera(string n, bool s, string c, Posizione pos, int costo, string modello) :
		DispositivoSicurezza(n, s, c, Telecamera::getTipo()), Produttore(costo, modello) {
	proprietario = "Nessuno";
	rilevaMovimento = false;
	posizione = pos;
}

Telecamera::Telecamera(string n, bool s, string c, Posizione pos, string pro, int costo, string modello) :
		DispositivoSicurezza(n, s, c, Telecamera::getTipo()), Produttore(costo, modello) {
	proprietario = pro;
	rilevaMovimento = false;
	posizione = pos;
}

Telecamera::~Telecamera() {
	//cout<<"Distruggo: "<<this->getNome()<<" ..."<<endl;
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
	if(this->getStatoDispositivo()){
	switch(this->posizione){
		case Nord: this->posizione = Est; break;
		case Sud: this->posizione = Ovest; break;
		case Est: this->posizione = Sud; break;
		case Ovest: this->posizione = Nord; break;
		default: this->posizione = Nord;
	}
	}else
		cout<<"Dispositivo spento. accenderlo!"<<endl;
}

bool Telecamera::getRilevaMovimento() {
	return this->rilevaMovimento;
}

string Telecamera::stampaRilevaMovimento() {
	if(this->rilevaMovimento)
		return "Movimento";
	else
		return "Nessun movimento";
}


void Telecamera::setRilevaMovimento() {
	if(!this->rilevaMovimento)
		this->rilevaMovimento = true;
}

string Telecamera::getProprietario() {
	return this->proprietario;
}



//override del metodo purevirtual
string Telecamera::getNomeClasse() {
	return "Telecamera";
}

string Telecamera::toString() {
	return Telecamera::getNomeClasse() + " :        " + this->getID()
			+ "\nNome:              " + this->getNome()
			+ "\nStato Dispositivo: " + this->stampaStato()
			+ "\nCollocamento:      " + this->getCollocamento()
			+ "\nPoszione:          " + getPosizione()
			+ "\nMovimento:         " + stampaRilevaMovimento()
			+ "\nModello:           " + getModello()
			+ "\nProprietario:      " + proprietario;
}
char Telecamera::getTipo(){
		return 't';
	}

