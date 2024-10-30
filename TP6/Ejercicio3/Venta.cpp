/*
 * Venta.cpp
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#include "Venta.h"

int Venta::autonumerico = 0;

Venta::Venta()
	:codigo(++autonumerico) { this->fechaVenta = new Fecha(); }

void Venta::listarInfoVenta() {
	for(auto venta : this->productosVenta) {
		cout << "- Venta " << this->codigo << endl;
		venta->listarInfo();
		cout << endl;
	}
}

float Venta::montoTotal() {
	float montoTotal = 0;
	for(auto venta : this->productosVenta) {
		montoTotal += venta->precioVenta();
	}
	return montoTotal;
}

Venta::~Venta() {
	// TODO Auto-generated destructor stub
}
