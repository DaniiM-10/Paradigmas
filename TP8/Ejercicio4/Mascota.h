/*
 * Mascota.h
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#ifndef MASCOTA_H_
#define MASCOTA_H_
#include "Control.h"
#include<vector>

class Mascota {
	protected:
		static int autonumerico;
		int id_m;
		string nombre;
		Fecha fecha_nac;
		string raza;
		vector<Control*> controles;
	public:
		Mascota(string _nombre, int _dia_nac, int _mes_nac, int _anio_nac, string _raza);

		virtual void agregarControl(string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox) = 0;
		void listarInfo();
		bool tieneProxCtrol();
		double obtenerMontoTotalMes(int mes, int anio);

		// Getters
		int getIdM();
		string getNombre();

		virtual ~Mascota();
};

#endif /* MASCOTA_H_ */
