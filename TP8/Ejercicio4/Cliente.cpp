/*
 * Cliente.cpp
 *
 *  Created on: 20 nov 2024
 *      Author: Danii
 */

#include "Cliente.h"

int Cliente::autonumerico = 0;
Cliente::Cliente(string _nombre, string _email)
	: codigo(++autonumerico), nombre(_nombre), email(_email) {}

void Cliente::agregarMascota(Mascota *mascota) {
	this->mascotas.push_back(mascota);
}

void Cliente::agregarControl(int id_m, string descripcion, double monto, int dia_prox, int mes_prox, int anio_prox) {
	for(auto mascota : this->mascotas) {
		if(mascota->getIdM() == id_m){
			mascota->agregarControl(descripcion, monto, dia_prox, mes_prox, anio_prox);
			break;
		}
	}
}

double Cliente::montoAbonadoEnMes(int mes, int anio) {
	double monto_abonado = 0;
	for(auto mascota : this->mascotas) {
		monto_abonado += mascota->obtenerMontoTotalMes(mes, anio);
	}
	return monto_abonado;
}


double Cliente::montoTotalxMascota(int id_m, int mes, int anio) {
	double monto_total = 0;
	for(auto mascota : this->mascotas) {
		if(mascota->getIdM() == id_m){
			monto_total += mascota->obtenerMontoTotalMes(mes, anio);
			break;
		}
	}
	return monto_total;
}

void Cliente::listarInforxMascota(int id_m) {
	for(auto mascota : this->mascotas) {
		if(mascota->getIdM() == id_m) {
			mascota->listarInfo();
			break;
		}
	}
}

void Cliente::listarProximosCtroles() {
	cout << "_ Mascotas con proximos controles:" << endl;
	for(auto mascota : this->mascotas) {
		if(mascota->tieneProxCtrol()) {
			cout << "\t" << mascota->getNombre() << ": Tiene control" << endl;
		} else {
			cout << "\t" << mascota->getNombre() << ": No tiene proximos controles." << endl;
		}
	}
}

int Cliente::getCodigo() { return this->codigo; }

Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}

