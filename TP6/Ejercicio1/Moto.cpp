/*
 * Moto.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Moto.h"

using namespace std;

Moto::Moto(string _patente, int _anioModelo, double _tarifa, double _cilindrada)
: Vehiculo(_patente, _anioModelo, ((this->cilindada < 500) ? 80 : 80*2),  _tarifa) {
	this->cilindada = _cilindrada;
}

void Moto::escribirInfo() {
	Vehiculo::escribirInfo();
	cout << "Cilindrada: " << this->cilindada << endl;
}

double Moto::calcularPrecioViaje(double peso) {
	return this->getTarifa() + this->calcularIncremento(peso);
}

Moto::~Moto() {
	// TODO Auto-generated destructor stub
}
