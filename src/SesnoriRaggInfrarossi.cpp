/*
 * SesnoriRaggInfrarossi.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */
#include <string>
#include <iostream>

#include "SensoreRaggInfrarossi.h"
using namespace std;

SensoreRaggInfrarossi::	SensoreRaggInfrarossi(string n, bool s, string c):
	DispositivoSicurezza(n,s,c, SensoreRaggInfrarossi::getTipo()){
	check = false;
}

SensoreRaggInfrarossi::	SensoreRaggInfrarossi(string n, bool s, string c, bool check):
	DispositivoSicurezza(n,s,c, SensoreRaggInfrarossi::getTipo()){
	SensoreRaggInfrarossi::check = check;

}

SensoreRaggInfrarossi::~SensoreRaggInfrarossi(){
	cout<<"Distruggo: "<<this->getNome()<<" ..."<<endl;
}

// metodo per controllare se il sensore ha rilevato un movimento
bool SensoreRaggInfrarossi::getCheck(){
	if(this->getStatoDispositivo())
		return this->check;
}
// metodo che mi stampa se il sensore ha visto un infrazione
void SensoreRaggInfrarossi::stampaCheck(){
	if(this->check)
			cout<<"Violazione!"<<endl;
		else
			cout<<"Nessuna Violazione!"<<endl;
}

//metodo per viene chiamato quando il sensore osserva un'infrazione
void SensoreRaggInfrarossi::setCheck(){
	this->check = !(this->check);

}

//override del metodo purevirtual
string SensoreRaggInfrarossi::getNomeClasse(){
		return "SesnoriRaggInfrarossi";
	}

char SensoreRaggInfrarossi::getTipo(){
		return 's';
	}



