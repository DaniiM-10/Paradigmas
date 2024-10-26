/*
* Vehiculo.h
*
* Created on: 8 oct 2024
* Author: Danii
*/

#ifndef VEHICULO_H_
#define VEHICULO_H_
#include <iostream>
#include <string>
#include "Fecha.h"
using namespace std;

class Vehiculo {
	protected:
		string patente;
		int anioModelo;
		double pesoMax;
		const float INCREMENTO = 0.25; // 25%
		double tarifa;

		double calcularIncremento(double peso);
	private:
		bool pesoExcedido(double peso);
	public:
		Vehiculo(string, int, double, double);
		virtual ~Vehiculo();
		void escribirInfo();
		virtual double calcularPrecioViaje(double peso) = 0;
		// Getters
		double getTarifa();
};

#endif /* VEHICULO_H_ */
