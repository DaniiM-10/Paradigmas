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
	private:
		string patente;
		int anioModelo;
		double pesoMax;
		const float INCREMENTO = 0.25; // 25%
		double tarifa;
		bool pesoExcedido(double peso);
		double calcularIncremento(double peso);
	public:
		Vehiculo(string, int, double, double);
		~Vehiculo();
		void escribirInfo();
		double calcularPrecioViaje(double peso);
		// Getters
		double getTarifa();
};

#endif /* VEHICULO_H_ */
