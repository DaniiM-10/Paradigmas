/*
 * Articulo.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Articulo.h"

int Articulo::autonumerico = 0;

Articulo::Articulo(string _descripcion, float _precioBase)
	: codigo(++autonumerico), descripcion(_descripcion), precioBase(_precioBase) {}

void Articulo::listarInfo() {
	cout << "Codigo: " << this->codigo << endl;
	cout << "Descripcion: " << this->descripcion << endl;
}

int Articulo::getCodigo() { return this->codigo; }

string Articulo::getDescripcion() { return this->descripcion; }

float Articulo::getPrecioBase() { return this->precioBase; }

Articulo::~Articulo() {
	// TODO Auto-generated destructor stub
}

