/*
 * Pedido.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Pedido.h"

int Pedido::autonumerico = 0;

Pedido::Pedido()
	: codigo(++autonumerico) {}

void Pedido::listarInfoArticulos() {
	for(auto articulo : this->articulos) {
		cout << "- Articulo: " << articulo->getCodigo() << endl;
		articulo->listarInfo();
		cout << "Precio pedido: $" << this->precioPedido() << endl;
	}
}

float Pedido::precioPedido() {
	float montoTotal = 0;
	for(auto articulo : this->articulos) {
		montoTotal += articulo->precioVenta();
	}
	return montoTotal;
}

int Pedido::getCodigo() { return this->codigo; }

Fecha Pedido::getFechaPedido() { return this->fechaPedido; }

Platillo* Pedido::getPlatillo() { return (this->articulos.size() > 0 && this->articulos[0]->esPlatillo()) ? static_cast<Platillo*>(this->articulos[0]) : nullptr; }

void Pedido::setArticulo(Articulo* articulo) { this->articulos.push_back(articulo); }

Pedido::~Pedido() {
	// TODO Auto-generated destructor stub
}

