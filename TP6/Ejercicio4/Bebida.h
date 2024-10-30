/*
 * Bebida.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef BEBIDA_H_
#define BEBIDA_H_
#include "Articulo.h"

class Bebida : public Articulo {
	private:
		int capacidad;
	public:
		Bebida(string, float, int);

		void listarInfo();
		float precioVenta();

		~Bebida();
};

#endif /* BEBIDA_H_ */
