/*
 * Revista.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef REVISTA_H_
#define REVISTA_H_
#include <iostream>
#include "Articulo.h"
using namespace std;

class Revista : public Articulo {
	private:
		int numero;
		int volumen;
		string campoTem;
		const static double DESCUENTO;
	public:
		Revista(int, string, int, double, int, int, string);
		void mostrarInfo();
		float precioVenta();
		int antiguedad();

		// Getter
		string getCampoTem();
		~Revista();
};

#endif /* REVISTA_H_ */
