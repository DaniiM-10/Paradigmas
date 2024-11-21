/*
 * Tradicional.cpp
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#include "Tradicional.h"

Tradicional::Tradicional(string _nombre, int _dia_nac, int _mes_nac, int _anio_nac, string _raza)
	: Mascota(_nombre, _dia_nac, _mes_nac, _anio_nac, _raza) {}

void Tradicional::listarInfo() { Mascota::listarInfo(); }

void Tradicional::agregarControl(string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox) {
	this->controles.push_back(new Control(descripcion, monto, dia_prox, mes_prox, anio_prox));
}

Tradicional::~Tradicional() {
	// TODO Auto-generated destructor stub
}

