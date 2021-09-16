/*
 * Produttore.cpp
 *
 *  Created on: 15 set 2021
 *      Author: alexm
 */

#include "Produttore.h"

#include <string>
#include <iostream>

using namespace std;

Produttore::Produttore(int c, string m):costo(c),modello(m) {}

Produttore::~Produttore(){

}

string Produttore::getModello(){
	return this->modello;
}



