/*
 * Producto.h
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_
#include <iostream>
#include "Fecha.h"

using namespace std;

class Producto {
	private:
		static int autonumerico;
		int codigo;
		string descripcion;
		float precioBase;
	public:
		Producto(string, float);

		void listarInfo();
		virtual float precioVenta() = 0;

		// Getters
		int getCodigo();
		float getPrecioBase();

		virtual ~Producto();
};

#endif /* PRODUCTO_H_ */
