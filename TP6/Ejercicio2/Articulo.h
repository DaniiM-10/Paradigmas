/*
 * Articulo.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef ARTICULO_H_
#define ARTICULO_H_
#include <iostream>
using namespace std;

class Articulo {
	protected:
		int codigo;
		string titulo;
		int anioEdicion;
		double precioBase;
		static const double IVA;
	public:
		Articulo(int, string, int, double);
		void mostrarInfo();
		virtual float precioVenta() = 0;

		// Getter
		int getCodigo();

		virtual ~Articulo();
};

#endif /* ARTICULO_H_ */
