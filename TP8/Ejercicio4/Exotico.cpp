/*
 * Exotico.cpp
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#include "Exotico.h"

const double Exotico::INCREMENTO = 1.10;
Exotico::Exotico(string _nombre, int _dia_nac, int _mes_nac, int _anio_nac, string _raza, string _descripcion)
	: Mascota(_nombre, _dia_nac, _mes_nac, _anio_nac, _raza), descripcion(_descripcion) {}

void Exotico::listarInfo() {
	Mascota::listarInfo();
	cout << "Descripcion: " << this->descripcion << endl;
}

void Exotico::agregarControl(string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox) {
	this->controles.push_back(new Control(descripcion, (monto * this->INCREMENTO), dia_prox, mes_prox, anio_prox));
}

Exotico::~Exotico() {}

