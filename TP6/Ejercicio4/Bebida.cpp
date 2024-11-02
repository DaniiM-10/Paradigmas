/*
 * Bebida.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Bebida.h"

Bebida::Bebida(string _descripcion, float _precioBase, int _capacidad)
	: Articulo(_descripcion, _precioBase) { this->capacidad = _capacidad; }

void Bebida::listarInfo() {
	Articulo::listarInfo();
	cout << "Capacidad: " << this->capacidad << endl;
}

float Bebida::precioVenta() { return Articulo::getPrecioBase(); }

bool Bebida::esPlatillo() { return false; }

Bebida::~Bebida() {
	// TODO Auto-generated destructor stub
}

