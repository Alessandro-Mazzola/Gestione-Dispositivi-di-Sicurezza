/*
 * DispositivoSicurezza.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include "DispositivoSicurezza.h"

#include <string>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int DispositivoSicurezza::serialID = 0;

void DispositivoSicurezza::incrementaSerialID(){
	serialID++;
}

DispositivoSicurezza::DispositivoSicurezza(string n, bool s, string c, char cod){
	incrementaSerialID();
	ID = cod + to_string(serialID);
	//cout<<ID<<endl;
	nome = n;
	statoDispositivo = s;
	//cout<<statoDispositivo<<endl;
	collocamento = c;
	//cout<<collocamento<<endl;
}
DispositivoSicurezza::~DispositivoSicurezza(){}

void DispositivoSicurezza::accendi(){
	if(this->statoDispositivo)
		cout<<"Dispositivo già acceso!"<<endl;
	else
		this->statoDispositivo = true;
}

void DispositivoSicurezza::spegni(){
	if(!this->statoDispositivo)
			cout<<"Dispositivo già spento!"<<endl;
		else
			this->statoDispositivo = false;
}

bool DispositivoSicurezza::getStatoDispositivo() const {
	return this->statoDispositivo;
}

string DispositivoSicurezza::getCollocamento() const {
	return this->collocamento;
}

string DispositivoSicurezza::getNome() const {
	return this->nome;
}
string DispositivoSicurezza::getID() const{
	return this->ID;
}

string DispositivoSicurezza::stampaStato(){
	if(this->statoDispositivo==true)
			return "Acceso";
		else
			return "Spento";
}




