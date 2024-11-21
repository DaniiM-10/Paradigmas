/*
 * Control.cpp
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#include "Control.h"

Control::Control(string _descripcion, double _monto, int _dia_prox, int _mes_prox, int _anio_prox) {
	this->fecha_ctrol = Fecha();
	this->descripcion = _descripcion;
	this->monto = _monto;
	this->fecha_prox_ctrol = Fecha(_dia_prox, _mes_prox, _anio_prox);
}

Fecha Control::getFechaCtrol() { return this->fecha_ctrol; }

string Control::getDescripcion() { return this->descripcion; }

double Control::getMonto() { return this->monto; }

Fecha Control::getFechaProximoCtrol() { return this->fecha_prox_ctrol; }

Control::~Control() {}

