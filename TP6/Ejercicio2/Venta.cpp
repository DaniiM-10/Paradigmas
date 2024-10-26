/*
 * Venta.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Venta.h"

using namespace std;

int Venta::autonumerico = 0;

Venta::Venta()
	: codigo(++autonumerico){
	this->fechaVenta = new Fecha();
}

void Venta::listarInfo() {
	cout << "===== Informacion de los Articulos =====" << endl;
	for(auto articulo : this->articulosVenta) {
		cout << "- Articulo " << articulo->getCodigo() << endl;
		articulo->mostrarInfo();
		cout << endl;
	}
}

void Venta::setArticulo(Articulo* nuevo_articulo) { this->articulosVenta.push_back(nuevo_articulo); }

double Venta::montoTotal() {
	double montoTotal = 0;
	for(auto articulo : this->articulosVenta) {
		montoTotal += articulo->precioVenta();
	}
	return montoTotal;
}

Fecha* Venta::getFecha() { return this->fechaVenta; }

int Venta::getCodigo() { return this->codigo; }

Venta::~Venta() {
	// TODO Auto-generated destructor stub
}
