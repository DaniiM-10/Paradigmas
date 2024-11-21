/*
 * Mascota.cpp
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#include "Mascota.h"

int Mascota::autonumerico = 0;
Mascota::Mascota(string _nombre, int _dia_nac, int _mes_nac, int _anio_nac, string _raza) {
	this->id_m = ++autonumerico;
	this->nombre = _nombre;
	this->fecha_nac = Fecha(_dia_nac, _mes_nac, _anio_nac);
	this->raza = _raza;
}

void Mascota::listarInfo() {
	int i = 0;
	cout << "id: " << this->id_m << endl;
	cout << "Nombre: " << this->nombre << endl;
	cout << "Fecha de Nacimiento: " << this->fecha_nac << endl;
	cout << "Raza: " << this->raza << endl;
	for(auto control : this->controles) {
		i++;
		cout << "- Control " << i << endl;
		cout << "Fecha del Control: " << control->getFechaCtrol() << endl;
		cout << "Descripcion: " << control->getDescripcion() << endl;
		cout << "Fecha del Proximo Control: " << control->getFechaProximoCtrol() << endl;
		cout << "Monto: " << control->getMonto() << endl;
	}
	cout << "Tiene proximo control: " << (tieneProxCtrol() ? "Sí." : "No.") << endl;
}

bool Mascota::tieneProxCtrol() {
	bool tiene = false;
	Fecha fecha_actual;
	for(auto control : this->controles) {
		Fecha fecha_prox_ctrol = control->getFechaProximoCtrol();
		long int dias_restantes = fecha_prox_ctrol - fecha_actual;
		if(dias_restantes <= 5 && dias_restantes > 0) {
			tiene = true;
			break;
		}
	}
	return tiene;
}

double Mascota::obtenerMontoTotalMes(int mes, int anio) {
	double montoTotal = 0;
	for(auto control : this->controles) {
		if(control->getFechaCtrol().getMes() == mes) {
			if(control->getFechaCtrol().getAnio() == anio) {
				montoTotal += control->getMonto();
			}
		}
	}
	return montoTotal;
}

int Mascota::getIdM() { return this->id_m; }

string Mascota::getNombre() { return this->nombre; }

Mascota::~Mascota() {
}

