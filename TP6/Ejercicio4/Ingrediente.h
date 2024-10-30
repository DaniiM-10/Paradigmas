/*
 * Ingrediente.h
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#ifndef INGREDIENTE_H_
#define INGREDIENTE_H_
#include <iostream>
using namespace std;

class Ingrediente {
	private:
		static int autonumerico;
		int codigo;
		string descripcion;
		float precio;
	public:
		Ingrediente(string, float);

		void listarInfo();

		// Getters
		int getCodigo();
		float getPrecio();

		~Ingrediente();
};

#endif /* INGREDIENTE_H_ */
