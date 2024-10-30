/*
 * Pedido.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Pedido.h"

int Pedido::autonumerico = 0;

Pedido::Pedido()
	: codigo(++autonumerico){
	this->fechaPedido = new Fecha();
}

void Pedido::listarInfoArticulos() {
	for(auto articulo : this->articulos) {
		cout << "- Articulo: " << articulo->getCodigo() << endl;
		articulo->listarInfo();
	}
}

void Pedido::agregarArticulo() {
}

float Pedido::precioPedido() {
	float montoTotal = 0;
	for(auto articulo : this->articulos) {
		montoTotal += articulo->precioVenta();
	}
	return montoTotal;
}

int Pedido::getCodigo() { return this->codigo; }

Fecha* Pedido::getFechaPedido() { return this->fechaPedido; }

Pedido::~Pedido() {
	// TODO Auto-generated destructor stub
}
