/*
 * Sucursal.cpp
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#include "Sucursal.h"

int Mascota::autonumerico = 0;
Sucursal::Sucursal(string _direccion) : codigo(++autonumerico), direccion(_direccion) {}

void Sucursal::agregarCliente(Cliente* cliente) {
	this->clientes.push_back(cliente);
}

void Sucursal::agregarControl(int codigo, int id_m, string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox) {
	for(auto cliente : this->clientes) {
		if(cliente->getCodigo() == codigo) {
			cliente->agregarControl(id_m, descripcion, monto, dia_prox, mes_prox, anio_prox);
			break;
		}
	}
}

void Sucursal::agregarMascota(int codigo, Mascota *mascota) {
	for(auto cliente : this->clientes) {
		if(cliente->getCodigo() == codigo) {
			cliente->agregarMascota(mascota);
			break;
		}
	}
}

double Sucursal::montoAbonadoEnMes(int codigo, int mes, int anio) {
	for(auto cliente : this->clientes) {
		if(cliente->getCodigo() == codigo) {
			return cliente->montoAbonadoEnMes(mes, anio);
		}
	}
	return 0;
}

double Sucursal::montoTotalxMascota(int codigo, int id_m, int mes, int anio) {
	for(auto cliente : this->clientes) {
		if(cliente->getCodigo() == codigo) {
			return cliente->montoTotalxMascota(id_m, mes, anio);
		}
	}
	return 0;
}

void Sucursal::listarInforxMascota(int codigo, int id_m) {
	for(auto cliente : this->clientes) {
		if(cliente->getCodigo() == codigo) {
			cliente->listarInforxMascota(id_m);
			break;
		}
	}
}

void Sucursal::resumen(int mes, int anio) {
	double monto_total = 0;
	cout << "_ Resumen, recaudacion " << mes << "/" << anio << ":" << endl;
	for(auto cliente : this->clientes) {
		cout << "\t _ Codigo: " << cliente->getCodigo() << endl;
		double monto_abonado = cliente->montoAbonadoEnMes(mes, anio);
		cout << "\t _ Monto abonado: $" << monto_abonado << endl;
		monto_total += monto_abonado;
	}
	cout << endl;
	cout << "\t _Monto total recaudado: $" << monto_total << endl;
}

Sucursal::~Sucursal() {
	// TODO Auto-generated destructor stub
}

