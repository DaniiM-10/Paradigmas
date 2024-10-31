/*
 * Libro.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Libro.h"

using namespace std;

const double Libro::DESCUENTO = 1.10;

Libro::Libro(string _titulo, int _anioEdicion, double _precioBase, string _nombreEditorial, string _nombreAutor, bool _bestSeller)
	: Articulo(_titulo, _anioEdicion, _precioBase) {
	this->nombreEditorial = _nombreEditorial;
	this->nombreAutor = _nombreAutor;
	this->bestSeller = _bestSeller;
}

bool Libro::getBestSeller() { return this->bestSeller; }

void Libro::mostrarInfo() {
	Articulo::mostrarInfo();
	cout << "Nombre Editorial: " << this->nombreEditorial << endl;
	cout << "Nombre Autor: " << this->nombreAutor << endl;
	cout << "Best Seller: " << ((this->bestSeller) ? "Si" : "No") << endl;
}

float Libro::precioVenta() {
	return (this->getBestSeller())
				? (this->precioBase * this->DESCUENTO * this->IVA)
				: (this->precioBase * this->IVA);
}

Libro::~Libro() {
	// TODO Auto-generated destructor stub
}
