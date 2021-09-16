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
#include "Produttore.h"

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
	string stampaCheck();
	//override del metodo purevirtual
	virtual string getNomeClasse();
	virtual string toString();

	//metodo che chiama un campo della classe Produttore
	string stampaModelloProduttore(const Produttore &p);

	static char getTipo();

};
#endif /* SENSORERAGGINFRAROSSI_H_ */
