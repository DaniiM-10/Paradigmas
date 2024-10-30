/*
 * Limpieza.h
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#ifndef LIMPIEZA_H_
#define LIMPIEZA_H_
#include "Producto.h"

class Limpieza : public Producto {
	private:
		bool esToxico;
		static const float IVA;
	public:
		Limpieza(string, float, bool);

		void listarInfo();
		float precioVenta();

		// Getters
		bool getEsToxico();

		~Limpieza();
};

#endif /* LIMPIEZA_H_ */
