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
		vector<Producto*> productosVenta;
	public:
		Venta();

		void listarInfoVenta();
		float montoTotal();

		virtual ~Venta();
};

#endif /* VENTA_H_ */
