/*
* Encomienda.h
*
* Created on: 8 oct 2024
* Author: Danii
*/

#ifndef ENCOMIENDA_H_
#define ENCOMIENDA_H_
#include <iostream>
#include <string>
#include "Fecha.h"
#include "Vehiculo.h"
using namespace std;

class Encomienda {
	private:
		static int autonumerico;
		int codigoEncomienda;
		string dirOrigen;
		string dirDestino;
		Fecha fechaIngreso;
		Fecha fechaEntrega;
		bool entregado;
		double pesoEncomienda;
		Vehiculo vehiculo;
	public:
		Encomienda(int, string, string, int diaI, int mesI, int anioI, int diaE, int mesE, int anioE, bool, double, Vehiculo);
		~Encomienda();
		void escribirInfo();
		double calcularPrecioEncomienda();
		// Setters
		void setFechaEntrega(Fecha fecha);
		// Getters
		Fecha getFechaEntrega();
		int getCodigo();
		double getPeso();

};

#endif /* ENCOMIENDA_H_ */
