/*
 * DispositivoSicurezza.h
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */
#ifndef DISPOSITIVO_SICUREZZA_H
#define DISPOSITIVO_SICUREZZA_H

#include <string>
using namespace std;

class DispositivoSicurezza
{
private:
	static int serialID;
	string ID;
	string nome;
	bool statoDispositivo;
	string collocamento;
	char codice;


public:
	void incrementaSerialID();
	DispositivoSicurezza(string n, bool s, string c, char cod);
	virtual ~DispositivoSicurezza();
	void accendi();
	void spegni();
	// ritorna i campi dichiarati private
	bool getStatoDispositivo() const;
	string getCollocamento() const;
	string getNome() const;

	//stampa lo stato del dispositivo
	void stampaStato();

	//metodo pure virutal
	virtual string getNomeClasse()=0;

	// metodo che mi restituisce un numero che rappresenta a che classe appartiene:
	// t: Telecamera; a: Allarme; s: SensoreRaggInfrarossi.
	static char getTipo();

};
#endif
