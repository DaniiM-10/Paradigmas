/*
 * Venta.h
 *
 *  Created on: 25 oct 2024
 *      Author: Alumno
 */

#ifndef VENTA_H_
#define VENTA_H_
#include <iostream>
#include <vector>
#include "Fecha.h"
#include "Articulo.h"
using namespace std;

class Venta {
	private:
		static int autonumerico;
		int codigo;
		Fecha* fechaVenta;
		vector<Articulo*> articulosVenta;
	public:
		Venta();
		void listarInfo();
		double montoTotal();

		// Getter
		Fecha* getFecha();
		int getCodigo();

		// Setter
		void setArticulo(Articulo* articulo);

		~Venta();
};

#endif /* VENTA_H_ */
