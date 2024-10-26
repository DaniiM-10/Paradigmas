/*
 * Articulo.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Articulo.h"

using namespace std;

const double Articulo::IVA = 1.21;

Articulo::Articulo(int _codigo, string _titulo, int _anioEdicion, double _precioBase)
	: codigo(_codigo), titulo(_titulo), anioEdicion(_anioEdicion), precioBase(_precioBase) {}

void Articulo::mostrarInfo() {
	cout << "Codigo: " << this->getCodigo() << endl;
	cout << "Titulo: " << this->titulo << endl;
	cout << "Anio de Edicion: " << this->anioEdicion << endl;
	cout << "Precio Base: " << this->precioBase << endl;
}

int Articulo::getCodigo() { return this->precioBase; }

Articulo::~Articulo() {
	// TODO Auto-generated destructor stub
}
