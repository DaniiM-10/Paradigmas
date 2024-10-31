/*
 * Articulo.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef ARTICULO_H_
#define ARTICULO_H_
#include <iostream>
using namespace std;

class Articulo {
	private:
		static int autonumerico;
		int codigo;
		string descripcion;
		float precioBase;
	public:
		Articulo(string, float);

		void listarInfo();
		virtual float precioVenta() = 0;

		// Getters
		int getCodigo();
		string getDescripcion();
		float getPrecioBase();

		virtual ~Articulo();
};

#endif /* ARTICULO_H_ */
