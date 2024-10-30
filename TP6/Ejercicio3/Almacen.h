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
#include "Alimento.h"
#include "Limpieza.h"
#include "Venta.h"

class Almacen {
	private:
		string nombre;
		vector<Producto*> productosAlmacen;
		vector<Venta*> ventas;
	public:
		Almacen(string);

		float ventasDelMes(Fecha);
		void crearProducto(string, float, Fecha, bool);
		void crearProducto(string, float, bool);
		void crearVenta(int);


		~Almacen();
};

#endif /* ALMACEN_H_ */
