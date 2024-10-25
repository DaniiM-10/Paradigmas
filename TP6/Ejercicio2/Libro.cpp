/*
 * Libro.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Libro.h"

using namespace std;

const double Libro::DESCUENTO = 1.10;

Libro::Libro(int _codigo, string _titulo, int _anioEdicion, double _precioBase, string _nombreEditorial, string _nombreAutor, bool _bestSeller)
	: Articulo(_codigo, _titulo, _anioEdicion, _precioBase) {
	this->nombreEditorial = _nombreEditorial;
	this->nombreAutor = _nombreAutor;
	this->bestSeller = _bestSeller;
}

bool Libro::esBestSeller() {
}

void Libro::mostrarInfo() {
}

float Libro::precioVenta() {
}

Libro::~Libro() {
	// TODO Auto-generated destructor stub
}
