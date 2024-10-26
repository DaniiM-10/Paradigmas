/*
 * Moto.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef MOTO_H_
#define MOTO_H_
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Moto : public Vehiculo {
	private:
		double cilindada;
	public:
		Moto(string, int, double, double);
		void escribirInfo();
		double calcularPrecioViaje(double peso);
		~Moto();
};

#endif /* MOTO_H_ */