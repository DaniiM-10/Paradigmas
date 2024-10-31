/*
 * Pedido.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef PEDIDO_H_
#define PEDIDO_H_
#include <vector>
#include "Articulo.h"
#include "Fecha.h"
using namespace std;

class Pedido {
	private:
		static int autonumerico;
		int codigo;
		Fecha* fechaPedido;
		vector<Articulo*> articulos;
	public:
		Pedido();

		void listarInfoArticulos();
		float precioPedido();

		// Getters
		int getCodigo();
		Fecha* getFechaPedido();

		// Setters
		void setArticulo(Articulo* articulo);

		~Pedido();
};

#endif /* PEDIDO_H_ */
