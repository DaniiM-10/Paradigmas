/*
 * Restaurant.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef RESTAURANT_H_
#define RESTAURANT_H_
#include "Pedido.h"

class Restaurant {
	private:
		string nombre;
		vector<Pedido*> pedidos;
	public:
		Restaurant(string);

		float recaudacionDelDia(Fecha*);

		// Getters
		string getNombre();

		~Restaurant();
};

#endif /* RESTAURANT_H_ */
