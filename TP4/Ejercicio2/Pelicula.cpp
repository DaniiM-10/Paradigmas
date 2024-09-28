/*
 * Pelicula.cpp
 *
 *  Created on: 26 sept 2024
 *      Author: Danii
 */
#include "Pelicula.h"

int Pelicula::autonumerico = 0;

Pelicula::Pelicula()
	: codigo(0), titulo(""), director(""), estreno(false), precioBase(0), tipoPelicula(TipoPelicula::N){
	cout << "Constructor por Defecto: " << this << endl;
};

Pelicula::Pelicula(string _titulo, string _director, bool _estreno, float _precioBase, TipoPelicula _tipoPelicula)
	: codigo(++autonumerico), titulo(_titulo), director(_director), estreno(_estreno), precioBase(_precioBase), tipoPelicula(_tipoPelicula){
	cout << "Constructor con Parametros: " << this << endl;
}

Pelicula::Pelicula(const Pelicula &co)
	: codigo(co.codigo), titulo(co.titulo), director(co.director), estreno(co.estreno), precioBase(co.precioBase), tipoPelicula(co.tipoPelicula){
	cout << "Constructor Copia: " << this << endl;
};

Pelicula::~Pelicula(){
	cout << "Destructor: " << this << endl;
};

void Pelicula::listarInformacion() {
	cout << "Codigo: " << this->codigo << endl;
	cout << "Titulo: " << this->titulo << endl;
	cout << "Director: " << this->director << endl;
	cout << "Estreno: " << (this->estreno ? "Si" : "No") << endl;
	cout << "Precio base: " << this->precioBase << endl;
	cout << "Tipo de Pelicula: " << (this->tipoPelicula == TipoPelicula::N ? "Normal" : "Independiente") << endl;
};

float Pelicula::calcularCosto() {
	float costo = this->precioBase;
	if(this->tipoPelicula == TipoPelicula::I) {
		costo *= 1.30;
	} else {
		if(this->estreno == false) costo *= 0.8;
	}
	return costo;
}
