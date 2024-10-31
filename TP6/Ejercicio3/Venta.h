/*
 * Venta.h
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#ifndef VENTA_H_
#define VENTA_H_
#include <vector>
#include "Producto.h"

class Venta {
	private:
		static int autonumerico;
		int codigo;
		Fecha* fechaVenta;
		vector<Producto*> productoVenta;
	public:
		Venta(Producto*);

		void listarInfoVenta();
		float montoTotal();

		// Getters
		Fecha* getFecha();

		~Venta();
};

#endif /* VENTA_H_ */
