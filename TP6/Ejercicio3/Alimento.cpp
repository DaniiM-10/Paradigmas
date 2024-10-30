/*
 * Alimento.cpp
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#include "Alimento.h"

const float Alimento::SUBSIDIO = 1.105;

Alimento::Alimento(string _descripcion, float _precioBase, int _dia, int _mes, int _anio, bool _aptoCeliacos)
	: Producto(_descripcion, _precioBase) {
	this->fechaVencimiento = new Fecha(_dia, _mes, _anio);
	this->aptoCeliacos = _aptoCeliacos;
}

void Alimento::listarInfo() {
	Producto::listarInfo();
	cout << "Fecha de Vencimiento: " << this->fechaVencimiento->toString() << endl;
	cout << "Apto para Celiacos? " << (this->aptoCeliacos ? "Si" : "No") << endl;
}

bool Alimento::estaVencido() {
	Fecha* fechaActual = new Fecha();
	return (this->fechaVencimiento < fechaActual);
}

float Alimento::precioVenta() { return (this->getPrecioBase() * SUBSIDIO); }

Alimento::~Alimento() {
	// TODO Auto-generated destructor stub
}

