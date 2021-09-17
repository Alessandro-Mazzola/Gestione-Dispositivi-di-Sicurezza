//============================================================================
// Name        : Dispositivo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
using namespace std;
#include "../Dispositivo/Allarme.h"
#include "../Dispositivo/SensoreRaggInfrarossi.h"
#include "../Dispositivo/Telecamera.h"
#include "../Dispositivo/TelecameraAllarmata.h"

#include "../gestoreDispositivo/gestoreDispositivo.h"
#include "../LineaComando/Menu.h"
int main() {


	Menu m1 = Menu();
	m1.stampaInizio();
	m1.showMenu();
	cout << "\n\nCHIUSURA PROGRAMMA....";

	return 0;
}
