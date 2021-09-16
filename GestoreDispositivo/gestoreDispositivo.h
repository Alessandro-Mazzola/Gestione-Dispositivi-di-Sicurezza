/*
 * GestoreDispositivo.h
 *
 *  Created on: 16 set 2021
 *      Author: alexm
 */

#ifndef GESTOREDISPOSITIVO_H_
#define GESTOREDISPOSITIVO_H_

#include <string>
#include <vector>
#include "../Dispositivo/DispositivoSicurezza.h"
#include "../Dispositivo/Allarme.h"
#include "../Dispositivo/SensoreRaggInfrarossi.h"
#include "../Dispositivo/Telecamera.h"
#include "../Dispositivo/TelecameraAllarmata.h"
using namespace std;

class GestoreSicurezza {
private:
	int scelta;
	vector<DispositivoSicurezza*> vettDispositivi;
	GestoreSicurezza();

public:

	//implemento singleton
	static GestoreSicurezza& instance();
	//distruttore
	~GestoreSicurezza();

	//mi assicuro che l'unica istanza della classe che posso usare è proprio istance
	GestoreSicurezza(GestoreSicurezza const&) = delete;
	void operator=(GestoreSicurezza const&) = delete;

	vector<DispositivoSicurezza*> getvettDispositivi();

	void aggiungiDispositivo(DispositivoSicurezza *d);
	void rimuoviDispositivoID(string s);
	void rimuoviDispositivo(DispositivoSicurezza *d);

	void accendiDispositivo(string s);
	void SpegniDispositivo(string s);
	void spegniDispositivi();
	void stampaDispositiviTotali();
	void stampaDispositiviAccesi();

	// da qui in poi ridefinisco i metodi già creati in Dispositivo. Quello che devo fare è andare a cercare nel vettore dispositivo
	// corretto e chiamare il metodo base
	void TsetPosizione(string s);
	void TsetRilevMovimento(string s);
	void Asuona(string s);
	void SgetCheck(string s);
	void TAcontrollo(string s);




};

class Menu {
private:
	int scelta;
public:
	//costruttore e distruttore
	Menu();
	virtual ~Menu();
	string showMenu();

};

#endif /* GESTOREDISPOSITIVO_H_ */
