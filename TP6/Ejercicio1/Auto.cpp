/*
 * Auto.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Auto.h"
#include "Vehiculo.h"

using namespace std;
const double Auto::BONUS = 0.1;
Auto::Auto(string _patente, int _anioModelo, double _pesoMaximo, double _tarifa, double _limiteMin)
	: Vehiculo(_patente, _anioModelo, _pesoMaximo, _tarifa) {
	this->limiteMin = _limiteMin;
}

Auto::~Auto() {
	// TODO Auto-generated destructor stub
}

void Auto::escribirInfo() {
	Vehiculo::escribirInfo();
	cout << "Limite: " << this->limiteMin << endl;
}

double Auto::calcularPrecioViaje(double peso) {
	if(peso < this->limiteMin) {
		return this->getTarifa() * (1 - this->BONUS) / 100;
	} else {
		return this->getTarifa() + this->calcularIncremento(peso);
	}
}
