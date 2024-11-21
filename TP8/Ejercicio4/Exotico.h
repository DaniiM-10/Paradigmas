/*
 * Exotico.h
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#ifndef EXOTICO_H_
#define EXOTICO_H_
#include"Mascota.h"

class Exotico : public Mascota {
	private:
		static double const INCREMENTO;
		string descripcion;
	public:
		Exotico(string _nombre, int _dia_nac, int _mes_nac, int _anio_nac, string _raza, string _descripcion);

		void listarInfo();
		void agregarControl(string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox);

		virtual ~Exotico();
};

#endif /* EXOTICO_H_ */
