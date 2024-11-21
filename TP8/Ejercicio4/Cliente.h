/*
 * Cliente.h
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include "Mascota.h"

class Cliente {
	private:
		static int autonumerico;
		int codigo;
		string nombre;
		string email;
		vector<Mascota*> mascotas;
	public:
		Cliente(string _nombre, string _email);

		void agregarMascota(Mascota* mascota);
		void agregarControl(int id_m, string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox);
		double montoAbonadoEnMes(int mes, int anio);
		double montoTotalxMascota(int id_m, int mes, int anio);
		void listarInforxMascota(int id_m);

		// Getters
		int getCodigo();

		virtual ~Cliente();
};

#endif /* CLIENTE_H_ */
