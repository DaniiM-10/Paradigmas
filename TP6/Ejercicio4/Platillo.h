/*
 * Platillo.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef PLATILLO_H_
#define PLATILLO_H_
#include <vector>
#include "Articulo.h"
#include "Ingrediente.h"

class Platillo : public Articulo {
	private:
		string nombre;
		vector<Ingrediente*> ingredientesExtra;
	public:
		Platillo(string, float, string);

		void listarInfo();
		void agregarIngredienteExtra(Ingrediente*);
		float precioVenta();

		~Platillo();
};

#endif /* PLATILLO_H_ */
