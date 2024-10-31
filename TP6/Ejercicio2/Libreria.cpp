/*
 * Libreria.cpp
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#include "Libreria.h"

using namespace std;

Libreria::Libreria(string _nombre)
	: nombre(_nombre) {}

void Libreria::listarInfoVentas(Fecha* fecha) {
	Fecha n1 = Fecha();
	Fecha n2 = Fecha();
	for(auto venta : this->ventas) {
		if(fecha == venta->getFecha()){
			cout << "- Venta " << venta->getCodigo() << endl;
			venta->listarInfo();
			cout << endl;
		}
	}
}

double Libreria::recaudaciones(int mes, int anio) {
	double montoTotal = 0;
	for(auto venta : this->ventas) {
		Fecha* fechaVenta = venta->getFecha();
		if(fechaVenta->getMes() == mes && fechaVenta->getAnio() == anio) {
			montoTotal += venta->montoTotal();
		}
	}
	return montoTotal;
}

void Libreria::crearArticulo(string titulo, int anioEdicion, double precioBase, string nombreEditorial, string nombreAutor, bool bestSeller) {
	Libro* nuevoLibro = new Libro(titulo, anioEdicion, precioBase, nombreEditorial, nombreAutor, bestSeller);
	this->articulosLibreria.push_back(nuevoLibro);
}
void Libreria::crearArticulo(string titulo, int anioEdicion, double precioBase, int numero, int volumen, string campoTem) {
	Revista* nuevaRevista = new Revista(titulo, anioEdicion, precioBase, numero, volumen, campoTem);
	this->articulosLibreria.push_back(nuevaRevista);
}

void Libreria::crearVenta(int codigoArt) {
	bool codigoValidacion = false;
	for(auto articulo : this->articulosLibreria) {
		if(codigoArt == articulo->getCodigo()) {
			Venta* nuevaVenta = new Venta(articulo);
			this->ventas.push_back(nuevaVenta);
			codigoValidacion = true;
		}
	}
	if(!codigoValidacion) { cout << "Articulo no encontrado :("; }
}

Libreria::~Libreria() {
	for(auto articulo : this->articulosLibreria) {
		delete articulo;
	}
	for(auto venta : this->ventas) {
		delete venta;
	}
}
