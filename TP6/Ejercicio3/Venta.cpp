/*
 * Venta.cpp
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#include "Venta.h"

int Venta::autonumerico = 0;

Venta::Venta(Producto* _producto)
	:codigo(++autonumerico) {
	this->fechaVenta = new Fecha();
	this->productoVenta.push_back(_producto);
}

void Venta::listarInfoVenta() {
	for(auto venta : this->productoVenta) {
		cout << "- Venta " << this->codigo << endl;
		venta->listarInfo();
	}
}

float Venta::montoTotal() {
	float montoTotal = 0;
	for(auto venta : this->productoVenta) {
		montoTotal += venta->precioVenta();
	}
	return montoTotal;
}

Fecha* Venta::getFecha() { return this->fechaVenta; }

Venta::~Venta() {
	// TODO Auto-generated destructor stub
}

