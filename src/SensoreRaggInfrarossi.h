/*
 * SensoreRaggInfrarossi.h
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */
#ifndef SENSORE_RAGG_INFRAROSSI_H
#define SENSORE_RAGG_INFRAROSSI_H

#include <string>
using namespace std;

#include "DispositivoSicurezza.h"

class SensoreRaggInfrarossi: public DispositivoSicurezza {
private:
	bool check;

public:
	SensoreRaggInfrarossi(string n, bool s, string c);
	// overload del costruttore
	SensoreRaggInfrarossi(string n, bool s, string c, bool check);

	virtual ~SensoreRaggInfrarossi();
	bool getCheck();
	void setCheck();
	void stampaCheck();
	//override del metodo purevirtual
	string getNomeClasse();

	static char getTipo();

};
#endif /* SENSORERAGGINFRAROSSI_H_ */
