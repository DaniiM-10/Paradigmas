/*
 * Auto.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef AUTO_H_
#define AUTO_H_
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Auto : public Vehiculo{
	private:
		double limiteMin;
		const static double BONUS;
	public:
		Auto(string, int, double, double, double);
		~Auto();
		void escribirInfo();
		double calcularPrecioViaje(double peso);
};

#endif /* AUTO_H_ */