/*
* Cuenta.cpp
*
* Created on: 4 oct 2024
* Author: Danii
*/

#include <iostream>
#include "Cuenta.h"
using namespace std;

Cuenta::Cuenta(){};
Cuenta::Cuenta(int _numero, long _dniTitular, double _saldo)
	: numero(_numero), dniTitular(_dniTitular), saldo(_saldo){};

Cuenta::~Cuenta(){}

bool Cuenta::depositar(double monto) {
	if(monto <= 0) return false;

	this->saldo += monto;
	return true;
}

bool Cuenta::extraer(double monto) {
	if(monto <= 0) return false;
	if(this->saldo < monto) return false;

	this->saldo -= monto;
	return false;
}

double Cuenta::getSaldo() { return this->saldo; }

void Cuenta::mostrarInformacion() {
	cout << this->dniTitular << " - " << this->numero << " - " << this->saldo << endl;
}