/*
 * Libreria.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef LIBRERIA_H_
#define LIBRERIA_H_
#include <iostream>
#include <vector>
#include "Articulo.h"
#include "Fecha.h"
#include "Libro.h"
#include "Revista.h"
#include "Venta.h"
using namespace std;

class Libreria {
	private:
		string nombre;
		vector<Articulo*> articulosLibreria;
		vector<Venta*> ventas;
	public:
		Libreria(string);
		void listarInfoVentas(Fecha fecha);
		double recaudaciones(int mes, int anio);

		// Sobrecarga de metodos
		void crearArticulo(string, int, double, string, string, bool); // Para Libro
		void crearArticulo(string, int, double, int, int, string); // Para Revista

		void crearVenta(int);

		~Libreria();
};

#endif /* LIBRERIA_H_ */
