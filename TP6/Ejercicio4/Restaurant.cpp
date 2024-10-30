/*
 * Restaurant.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Restaurant.h"

Restaurant::Restaurant(string _nombre)
	: nombre(_nombre) {}

float Restaurant::recaudacionDelDia(Fecha* fecha) {
	float recaudado = 0;
	for(auto pedido : this->pedidos) {
		pedido->listarInfoArticulos();
		if(pedido->getFechaPedido() - fecha == 0) {
			recaudado += pedido->precioPedido();
		}
	}
	return recaudado;
}

string Restaurant::getNombre() { return this->nombre; }

Restaurant::~Restaurant() {
	// TODO Auto-generated destructor stub
}

