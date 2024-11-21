/*
 * Control.h
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#ifndef CONTROL_H_
#define CONTROL_H_
#include<iostream>
#include "Fecha.h"

using namespace std;

class Control {
	private:
		Fecha fecha_ctrol;
		string descripcion;
		double monto;
		Fecha fecha_prox_ctrol;
	public:
		Control(string _descripcion, double _monto, int _dia_prox, int _mes_prox, int _anio_prox);

		// Getters
		Fecha getFechaCtrol();
		string getDescripcion();
		double getMonto();
		Fecha getFechaProximoCtrol();

		virtual ~Control();
};

#endif /* CONTROL_H_ */
