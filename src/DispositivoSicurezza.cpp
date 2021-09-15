/*
 * DispositivoSicurezza.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include <string>
#include <vector>
#include <list>
#include <iostream>

#include "DispositivoSicurezza.h"
using namespace std;

int DispositivoSicurezza::serialID = 0;

void DispositivoSicurezza::incrementaSerialID(){
	serialID++;
}

DispositivoSicurezza::DispositivoSicurezza(string n, bool s, string c, char cod){
	incrementaSerialID();
	ID = cod + to_string(serialID);
	cout<<ID<<endl;
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

void DispositivoSicurezza::stampaStato(){
	if(this->statoDispositivo==true)
			cout<<"Acceso"<<endl;
		else
			cout<<"Spento"<<endl;
}




