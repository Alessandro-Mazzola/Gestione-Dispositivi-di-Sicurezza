/*
 * Allarme.h
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */
#ifndef ALLARME_H
#define ALLARME_H

#include <string>
using namespace std;

#include "DispositivoSicurezza.h"

class Allarme: virtual public DispositivoSicurezza {
public:
	string proprietario;

public:
	Allarme(string n, bool s, string c);
	//overload costruttore
	Allarme(string n, bool s, string c, string cost);
	virtual ~Allarme();
	void emettiSuono();
	string getProprietario();

	//override del metodo pure virtual
	virtual string getNomeClasse();
	static char getTipo();

};

#endif
