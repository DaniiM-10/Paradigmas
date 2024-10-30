/*
 * Alimento.h
 *
 *  Created on: 26 oct 2024
 *      Author: Danii
 */

#ifndef ALIMENTO_H_
#define ALIMENTO_H_
#include "Producto.h"

class Alimento : public Producto {
	private:
		Fecha* fechaVencimiento;
		bool aptoCeliacos;
		static const float SUBSIDIO;
	public:
		Alimento(string, float, int, int, int, bool);

		void listarInfo();
		bool estaVencido();
		float precioVenta();

		~Alimento();
};

#endif /* ALIMENTO_H_ */
