/*
 * gestoreDispositivo.cpp
 *
 *  Created on: 16 set 2021
 *      Author: alexm
 */

#include "gestoreDispositivo.h"
#include "../Dispositivo/Allarme.h"
#include "../Dispositivo/SensoreRaggInfrarossi.h"
#include "../Dispositivo/Telecamera.h"
#include "../Dispositivo/TelecameraAllarmata.h"
#include "../Dispositivo/DispositivoSicurezza.h"

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

GestoreSicurezza::GestoreSicurezza() {}

GestoreSicurezza& GestoreSicurezza::instance(){
	//istanziazione
	static GestoreSicurezza INSTANCE;
	return INSTANCE;
}

GestoreSicurezza::~GestoreSicurezza() {
}

vector<DispositivoSicurezza*> GestoreSicurezza::getvettDispositivi() {
	return vettDispositivi;
}

void GestoreSicurezza::aggiungiDispositivo(DispositivoSicurezza *d) {
	vettDispositivi.push_back(d);
}

void GestoreSicurezza::rimuoviDispositivoID(string s) {
	for (std::vector<DispositivoSicurezza*>::iterator it = vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
		int index = distance(vettDispositivi.begin(), it);
		if (vettDispositivi.at(index)->getID() == s) {
			vettDispositivi.erase(it);
			cout << s << " corretamente elimianto!" << endl;
		}
	}
}

void GestoreSicurezza::rimuoviDispositivo(DispositivoSicurezza *d) {
	vector<DispositivoSicurezza*>::iterator i = find(vettDispositivi.begin(), vettDispositivi.end(), d);
	vettDispositivi.erase(i);
}

void GestoreSicurezza::accendiDispositivo(string s) {
	for (std::vector<DispositivoSicurezza*>::iterator it = vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
				int index = distance(vettDispositivi.begin(), it);
				if (vettDispositivi.at(index)->getID() == s)
					vettDispositivi.at(index)->accendi();
			}
}

void GestoreSicurezza::SpegniDispositivo(string s) {
	for (std::vector<DispositivoSicurezza*>::iterator it = vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
			int index = distance(vettDispositivi.begin(), it);
			if (vettDispositivi.at(index)->getID() == s)
				vettDispositivi.at(index)->spegni();
		}
}

void GestoreSicurezza::spegniDispositivi() {
	for (std::vector<DispositivoSicurezza*>::iterator it = vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
			int index = distance(vettDispositivi.begin(), it);
			vettDispositivi.at(index)->spegni();
		}

}

void GestoreSicurezza::stampaDispositiviTotali() {
	for (std::vector<DispositivoSicurezza*>::iterator it =
			vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
		int index = distance(vettDispositivi.begin(), it);
		cout << vettDispositivi.at(index)->toString() << endl;
	}
}

void GestoreSicurezza::stampaDispositiviAccesi(){
	for (std::vector<DispositivoSicurezza*>::iterator it =
				vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
			int index = distance(vettDispositivi.begin(), it);
			if(vettDispositivi.at(index)->getStatoDispositivo())
				cout << vettDispositivi.at(index)->toString() << endl;
		}
}

void GestoreSicurezza::TsetPosizione(string s){
	for (std::vector<DispositivoSicurezza*>::iterator it = vettDispositivi.begin(); it != vettDispositivi.end(); ++it) {
				int index = distance(vettDispositivi.begin(), it);
				//come faccio a fare il cast?
				//static_cast<Telecamera*>(&(vettDispositivi.at(index)))->setPosizione;
			}
}


// ----- MENU ------
Menu::Menu() {
	scelta = 0;
}

Menu::~Menu() {
}

string Menu::showMenu() {
}
