/*
 * TelecameraAllarmata.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include <string>
#include <iostream>

#include "TelecameraAllarmata.h"
#include "Telecamera.h"
using namespace std;

void TelecameraAllarmata::Controllo(){
}


// metodo che mi serve per risolvere il name clash di "Produttore"
string TelecameraAllarmata::getProduttoreTA(){
	return Telecamera::getProprietario();
}

//override del metodo purevirtual
// devo chiamarlo anche qui perchè altrimenti avrei name clash
string TelecameraAllarmata::getNomeClasse(){
		return Telecamera::getNomeClasse();
	}





