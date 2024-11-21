/*
 * Tradicional.h
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#ifndef TRADICIONAL_H_
#define TRADICIONAL_H_
#include "Mascota.h"

class Tradicional : public Mascota {
	public:
		Tradicional(string _nombre, int _dia_nac, int _mes_nac, int _anio_nac, string _raza);

		void listarInfo();
		void agregarControl(string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox);
		double incremento();

		virtual ~Tradicional();
};

#endif /* TRADICIONAL_H_ */
