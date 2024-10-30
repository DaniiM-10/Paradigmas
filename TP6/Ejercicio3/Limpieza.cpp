/*
 * Limpieza.cpp
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#include "Limpieza.h"

const float Limpieza::IVA = 1.21;

Limpieza::Limpieza(string _descripcion, float _precioBase, bool _esToxico)
	: Producto(_descripcion, _precioBase) { this->esToxico = _esToxico; }

void Limpieza::listarInfo() {
	Producto::listarInfo();
	cout << "Es Toxico? : " << (this->esToxico ? "Si" : "No") << endl;
}

bool Limpieza::getEsToxico() { return this->esToxico; }

float Limpieza::precioVenta() { return (this->getPrecioBase() * this->IVA); }

Limpieza::~Limpieza() {
	// TODO Auto-generated destructor stub
}

