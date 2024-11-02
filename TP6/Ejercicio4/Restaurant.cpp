/*
 * Restaurant.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Restaurant.h"

Restaurant::Restaurant(string _nombre)
	: nombre(_nombre) {}

float Restaurant::recaudacionDelDia(Fecha fecha) {
	float recaudado = 0;
	for(auto pedido : this->pedidos) {
		pedido->listarInfoArticulos();
		if(pedido->getFechaPedido().getDia() == fecha.getDia()) {
			recaudado += pedido->precioPedido();
		}
	}
	return recaudado;
}

void Restaurant::crearPedido(int codigo) {
	bool validarCodigo = false;
	for(auto articulo : this->articulos) {
		if(codigo == articulo->getCodigo()) {
			Pedido* nuevoPedido = new Pedido();
			nuevoPedido->setArticulo(articulo);
			this->pedidos.push_back(nuevoPedido);
			validarCodigo = true;
		}
	}
	if(!validarCodigo) { cout << "Articulo no encontrado :(" << endl; }
}

string Restaurant::getNombre() { return this->nombre; }

void Restaurant::crearArticulo(string descripcion, float precioBase, string nombre) {
	Platillo* nuevoArticulo = new Platillo(descripcion, precioBase, nombre);
	this->articulos.push_back(nuevoArticulo);
}

void Restaurant::crearArticulo(string descripcion, float precioBase, int capacidad) {
	Bebida* nuevoArticulo = new Bebida(descripcion, precioBase, capacidad);
	this->articulos.push_back(nuevoArticulo);
}

void Restaurant::agregarIngredienteExtra(Ingrediente* ingredienteExt, int codigoPedido) {
	for(auto pedido : this->pedidos) {
		if(pedido->getCodigo() == codigoPedido) {
			if(pedido->getPlatillo()->esPlatillo()) {
				pedido->getPlatillo()->agregarIngredienteExtra(ingredienteExt);
			} else {
				cout << "El pedido no es un platillo." << endl;
			}
		} else {
			cout << "No se encontró el pedido con ese codigo." << endl;
		}
	}
}

vector<Pedido*> Restaurant::getPedidos() { return this->pedidos; }


Restaurant::~Restaurant() {
	// TODO Auto-generated destructor stub
}

