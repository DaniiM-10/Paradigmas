/*
 * Libro.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef LIBRO_H_
#define LIBRO_H_
#include <iostream>
#include "Articulo.h"
using namespace std;

class Libro : public Articulo {
	private:
		string nombreEditorial;
		string nombreAutor;
		bool bestSeller;
		const static double DESCUENTO;
		bool esBestSeller();
	public:
		Libro(int, string, int, double, string, string, bool);
		void mostrarInfo();
		float precioVenta();
		~Libro();
};

#endif /* LIBRO_H_ */
