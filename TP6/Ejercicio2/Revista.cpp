/*
 * Revista.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Revista.h"

using namespace std;

const double Revista::DESCUENTO = 0.15;

Revista::Revista(int _codigo, string _titulo, int _anioEdicion, double _precioBase, int _numero, int _volumen, string _campoTem)
	: Articulo(_codigo, _titulo, _anioEdicion, _precioBase){
	this->numero = _numero;
	this->volumen = _volumen;
	this->campoTem = _campoTem;
}

void Revista::mostrarInfo() {
	Articulo::mostrarInfo();
	cout << "Numero: " << this->numero << endl;
	cout << "Volumen: " << this->volumen << endl;
	cout << "Campo Tematico: " << this->getCampoTem() << endl;
}

float Revista::precioVenta() {
	return (this->antiguedad() > 5)
			? ((this->precioBase - (this->precioBase * this->DESCUENTO)) * this->IVA)
			: (this->precioBase * this->IVA);
}

int Revista::antiguedad() {
	Fecha* fecha_actual = new Fecha();
	return (fecha_actual->getAnio() - this->anioEdicion);
}

string Revista::getCampoTem() { return this->campoTem; }

Revista::~Revista() {
	// TODO Auto-generated destructor stub
}
