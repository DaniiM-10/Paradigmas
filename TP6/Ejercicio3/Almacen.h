/*
 * Almacen.h
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#ifndef ALMACEN_H_
#define ALMACEN_H_
#include <vector>
#include "Producto.h"
#include "Venta.h"

class Almacen {
	private:
		string nombre;
		vector<Producto*> productosAlmacen;
		vector<Venta*> ventas;
	public:
		Almacen(string);

		void ventasDelMes(int mes, int anio);
		// cargar productos y ventas

		virtual ~Almacen();
};

#endif /* ALMACEN_H_ */
