/*
 * TelecameraAllarmata.h
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#ifndef TELECAMERAALLARMATA_H_
#define TELECAMERAALLARMATA_H_

#include <string>

#include "Telecamera.h"
#include "Allarme.h"
#include "String.h"
using namespace std;

class TelecameraAllarmata : public Telecamera, public Allarme
{
public:
	TelecameraAllarmata();
	~TelecameraAllarmata();
	void Controllo();
	string getProduttoreTA();
	//metodo override
	string getNomeClasse();
};



#endif /* TELECAMERAALLARMATA_H_ */
