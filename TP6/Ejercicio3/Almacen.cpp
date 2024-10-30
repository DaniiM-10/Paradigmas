/*
 * Almacen.cpp
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#include "Almacen.h"

Almacen::Almacen(string _nombre)
	: nombre(_nombre) {}

float Almacen::ventasDelMes(Fecha fecha) {
	float montoTotal = 0;
	for(auto venta : this->ventas) {
		if(venta->fechaVenta->getAnio() == fecha.getAnio()) {
			if(venta->fechaVenta->getMes() == fecha.getMes()) {
				montoTotal += venta->montoTotal();
			}
		}
	}
	return montoTotal;
}

void Almacen::crearProducto(string descripcion, float precioBase, Fecha fechaVenc, bool aptoCeliacos) { // Alimento
	this->productosAlmacen.push_back(new Alimento(descripcion, precioBase, fechaVenc, aptoCeliacos));
}

void Almacen::crearProducto(string descripcion, float precioBase, bool esToxico) { // Limpieza
	this->productosAlmacen.push_back(new Limpieza(descripcion, precioBase, esToxico));
}

void Almacen::crearVenta(int idProducto) {
	bool codigoValidacion = false;
	for(auto producto : this->productosAlmacen) {
		if(idProducto == producto->getCodigo()) {
			this->ventas.push_back(new Venta(producto));
			codigoValidacion = true;
		}
	}
	if(!codigoValidacion) { cout << "Producto no encontrado :("; }
}

Almacen::~Almacen() {
	// TODO Auto-generated destructor stub
}

