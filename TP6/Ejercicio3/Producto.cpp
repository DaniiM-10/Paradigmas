/*
 * Producto.cpp
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#include "Producto.h"

int Producto::autonumerico = 0;

Producto::Producto(string _descripcion, float _precioBase)
	: codigo(++autonumerico), descripcion(_descripcion), precioBase(_precioBase) {}

void Producto::listarInfo() {
	cout << "Codigo: " << this->codigo << endl;
	cout << "Descripcion: " << this->descripcion << endl;
	cout << "Precio Base: " << this->precioBase << endl;
}

int Producto::getCodigo() { return this->codigo; }

string Producto::getDescripcion() { return this->descripcion; }

float Producto::getPrecioBase() { return this->precioBase; }

Producto::~Producto() {
	// TODO Auto-generated destructor stub
}

