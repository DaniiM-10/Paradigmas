/*
 * Restaurant.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef RESTAURANT_H_
#define RESTAURANT_H_
#include "Pedido.h"
#include "Platillo.h"
#include "Bebida.h"

class Restaurant {
	private:
		string nombre;
		vector<Articulo*> articulos;
		vector<Pedido*> pedidos;
	public:
		Restaurant(string);

		float recaudacionDelDia(Fecha);
		void crearArticulo(string, float, string);
		void crearArticulo(string, float, int);
		void crearPedido(int);
		void agregarIngredienteExtra(Ingrediente*, int);

		// Getters
		string getNombre();
		vector<Pedido*> getPedidos();

		~Restaurant();
};

#endif /* RESTAURANT_H_ */
