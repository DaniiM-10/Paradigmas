/*
 * Ingrediente.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Ingrediente.h"

int Ingrediente::autonumerico = 0;
Ingrediente::Ingrediente(string _descripcion, float _precio)
	: codigo(++autonumerico), descripcion(_descripcion), precio(_precio) {}

void Ingrediente::listarInfo() {
	cout << "Codigo: " << this->codigo << endl;
	cout << "Descripcion: " << this->descripcion << endl;
	cout << "Precio: " << this->precio << endl;
}

int Ingrediente::getCodigo() { return this->codigo; }

float Ingrediente::getPrecio() { return this->precio; }

Ingrediente::~Ingrediente() {
	// TODO Auto-generated destructor stub
}

