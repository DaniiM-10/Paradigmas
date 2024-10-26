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
		Fecha* fechaIngreso;
		Fecha fechaEntrega;
		bool entregado;
		double pesoEncomienda;
		Vehiculo* vehiculo;

	public:
		Encomienda(string _dirOrigen, string _dirDestino, Fecha* fecha, double _pesoEncomienda, Vehiculo* _vehiculo);  // Cambiado a puntero
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