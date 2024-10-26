/*
* Sistema.h
*
* Created on: 8 oct 2024
* Author: Danii
*/

#ifndef SISTEMA_H_
#define SISTEMA_H_

#include <iostream>
#include <vector>
#include "Encomienda.h"
#include "Vehiculo.h"

using namespace std;

class Sistema {
	private:
		vector<Encomienda*> encomiendas;
		bool compararFechas(Fecha fecha1, Fecha fecha2);
	public:
		Sistema();
		~Sistema();

		void registrarEncomienda(string origenE, string destinoE, double pesoE, Vehiculo* vehiculoE);
		void cargarFechaEntrega(int codigoE, Fecha fechaEntregaE);
		void listarEntregas(Fecha fecha);
};

#endif /* SISTEMA_H_ */