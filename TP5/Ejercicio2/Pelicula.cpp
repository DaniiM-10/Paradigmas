/*
 * Pelicula.cpp
 *
 *  Created on: 26 sept 2024
 *      Author: Danii
 */
#include "Pelicula.h"

int Pelicula::autonumerico = 0;

Pelicula::Pelicula()
	: codigo(0), titulo("Ninguno :P"), director("", 0), estreno(), precioBase(0), tipoPelicula(TipoPelicula::N) {
	cout << "Constructor por Defecto: " << this << endl;
};

Pelicula::Pelicula(string _titulo, float _precioBase, TipoPelicula _tipoPelicula, string _nombreDirector, int _edadDirector, short _dia, short _mes, short _anio)
	: codigo(++autonumerico), titulo(_titulo), director(_nombreDirector, _edadDirector), estreno(_dia, _mes, _anio), precioBase(_precioBase), tipoPelicula(_tipoPelicula) {
	cout << "Constructor con Parametros: " << this << endl;
}

Pelicula::Pelicula(const Pelicula &co)
	: codigo(co.codigo), titulo(co.titulo), director(co.director), estreno(co.estreno), precioBase(co.precioBase), tipoPelicula(co.tipoPelicula) {
	cout << "Constructor Copia: " << this << endl;
};

Pelicula::~Pelicula(){
	cout << "Destructor: " << this << endl;
};

void Pelicula::listarInformacion() {
	cout << "Codigo: " << this->codigo << endl;
	cout << "Titulo: " << this->titulo << endl;
	this->director.biografia(); //???
	cout << "Fecha de Estreno: " << this->estreno.getDia() << "/" << this->estreno.getMes() << "/" << this->estreno.getAnio() << endl;
	cout << "Precio: $" << this->calcularCosto() << endl;
	cout << "Tipo de Pelicula: " << (this->tipoPelicula == TipoPelicula::N ? "Normal" : "Independiente") << endl;
};

bool Pelicula::esEstreno() {
	Fecha* fechaActual = new Fecha();

	return (fechaActual->getAnio() - this->estreno.getAnio()) > 1
			? false // No es estreno
			: true;
};

float Pelicula::calcularCosto() {
	float costo = this->precioBase;

	if(this->tipoPelicula == TipoPelicula::I) { // Aumento
		costo *= 1.30;
	} else { // Descuento
		if(this->esEstreno() == false) costo *= 0.8;
	}
	return costo;
};
