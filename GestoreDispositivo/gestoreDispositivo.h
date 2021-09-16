/*
 * GestoreDispositivo.h
 *
 *  Created on: 16 set 2021
 *      Author: alexm
 */

#ifndef GESTOREDISPOSITIVO_H_
#define GESTOREDISPOSITIVO_H_

#include "../Dispositivo/DispositivoSicurezza.h"
#include "../Dispositivo/Allarme.h"
#include "../Dispositivo/SensoreRaggInfrarossi.h"
#include "../Dispositivo/Telecamera.h"
#include "../Dispositivo/TelecameraAllarmata.h"
using namespace std;

class Menu{
private:
	scelta;
public:
	//costruttore e distruttore
	Menu();
	virtual ~Menu();

	string showMenu();

};


class GestoreDispositivo: public Menu{
public:
	GestoreDispositivo();
	~GestoreDispositivo();
};


#endif /* GESTOREDISPOSITIVO_H_ */
