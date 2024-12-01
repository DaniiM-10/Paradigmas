/*
 * Sucursal.h
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#ifndef SUCURSAL_H_
#define SUCURSAL_H_
#include "Cliente.h"

class Sucursal {
	private:
		static int autonumerico;
		int codigo;
		string direccion;
		vector<Cliente*> clientes;
	public:
		Sucursal(string _direccion);

		void agregarCliente(Cliente* cliente);
		void agregarControl(int codigo, int id_m, string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox);
		void agregarMascota(int codigo, Mascota* mascota);
		double montoAbonadoEnMes(int codigo, int mes, int anio);
		double montoTotalxMascota(int codigo, int id_m, int mes, int anio);
		void listarInforxMascota(int codigo, int id_m);
		void listarProximosCtroles(int codigo);
		void resumen(int mes, int anio);

		virtual ~Sucursal();
};

#endif /* SUCURSAL_H_ */
