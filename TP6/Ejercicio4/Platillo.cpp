/*
 * Platillo.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Platillo.h"

Platillo::Platillo(string _descripcion, float _precioBase, string _nombre)
	: Articulo(_descripcion, _precioBase) { this->nombre = _nombre;}

void Platillo::listarInfo() {
	cout << "Nombre: " << this->nombre << endl;
	Articulo::listarInfo();
}

void Platillo::agregarIngredienteExtra(Ingrediente* ingredienteExt) {
    this->ingredientesExtra.push_back(ingredienteExt);
}

float Platillo::precioVenta() {
	float precioFinal = 0;
	for(auto ingredienteE : this->ingredientesExtra) {
		precioFinal += ingredienteE->getPrecio();
	}
	return (precioFinal + Articulo::getPrecioBase());
}

bool Platillo::esPlatillo() { return true; }

Platillo::~Platillo() {
	// TODO Auto-generated destructor stub
}

