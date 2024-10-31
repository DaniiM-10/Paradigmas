/*
 * Articulo.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Articulo.h"

using namespace std;

const double Articulo::IVA = 1.21;
int Articulo::autonumerico = 0;

Articulo::Articulo(string _titulo, int _anioEdicion, double _precioBase)
	: codigo(++autonumerico), titulo(_titulo), anioEdicion(_anioEdicion), precioBase(_precioBase) {}

void Articulo::mostrarInfo() {
	cout << "Codigo: " << this->getCodigo() << endl;
	cout << "Titulo: " << this->titulo << endl;
	cout << "Anio de Edicion: " << this->anioEdicion << endl;
	cout << "Precio Base: " << this->precioBase << endl;
}

int Articulo::getCodigo() { return this->codigo; }

Articulo::~Articulo() {
	// TODO Auto-generated destructor stub
}
