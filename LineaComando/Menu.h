/*
 * Menu.h
 *
 *  Created on: 17 set 2021
 *      Author: alexm
 */

#ifndef MENU_H_
#define MENU_H_

#include <iostream>
#include <string>
#include "../Dispositivo/DispositivoSicurezza.h"
using namespace std;

class Menu {
private:
	int scelta;
	bool next;
	char tipo;
	string nome;
	string collocamento;
	int costo;
	string modello;

	string id;//per andare a cercare un certo dispositivo

	DispositivoSicurezza* temp;
public:
	//costruttore e distruttore
	Menu();
	virtual ~Menu();
	bool getnext();
	void showMenu();
	void caso1();
	void caso2();
	void caso3();
	void caso4();
	void caso5();
	void caso6();
	void caso7();
	void caso8();
	void caso9();

	void stampaInizio();




};



#endif /* MENU_H_ */
