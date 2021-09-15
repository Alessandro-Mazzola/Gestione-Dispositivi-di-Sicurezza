/*
 * Produttore.h
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */
#ifndef PRODUTTORE_H
#define PRODUTTORE_H

#include <string>
using namespace std;

class Produttore {
private:
	int costo;
	string modello;

public:
	Produttore(int c, string m);
	virtual ~Produttore();
	string getModello();

};
#endif
