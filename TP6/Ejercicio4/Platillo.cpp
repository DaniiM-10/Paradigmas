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

void Platillo::agregarIngredienteExtra() {

}

float Platillo::precioVenta() {
	float precioFinal = 0;
	for(auto ingredienteE : this->ingredientesExtra) {
		precioFinal += ingredienteE->getPrecio();
	}
	return (precioFinal + Articulo::getPrecioBase());
}

Platillo::~Platillo() {
	// TODO Auto-generated destructor stub
}

