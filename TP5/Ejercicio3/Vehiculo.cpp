/*
* Vehiculo.cpp
*
* Created on: 8 oct 2024
* Author: Danii
*/

#include "Vehiculo.h"

Vehiculo::Vehiculo(string _patente, int _anioModelo, double _pesoMax, double _tarifa)
	:patente(_patente), anioModelo(_anioModelo), pesoMax(_pesoMax), tarifa(_tarifa){};

Vehiculo::~Vehiculo(){};

void Vehiculo::escribirInfo() {
	cout << "Patente: " << this->patente << endl;
	cout << "Año del Modelo: " << this->anioModelo << endl;
	cout << "Peso Maximo: " << this->pesoMax << endl;
	cout << "Tarifa: " << this->getTarifa() << endl;
};

double Vehiculo::getTarifa() { return this->tarifa; };

bool Vehiculo::pesoExcedido(double peso) { return this->pesoMax < peso; };

double Vehiculo::calcularIncremento(double peso) {
	double montoIncremento = 0;
	if(this->pesoExcedido(peso)) montoIncremento = this->getTarifa() * this->INCREMENTO;
	return montoIncremento;
};

double Vehiculo::calcularPrecioViaje(double peso) { return this->getTarifa() + this->calcularIncremento(peso); };
