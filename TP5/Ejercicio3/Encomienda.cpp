/*
* Encomienda.cpp
*
* Created on: 8 oct 2024
* Author: Danii
*/
#include "Encomienda.h"

int Encomienda::autonumerico = 0;

Encomienda::Encomienda(int _codigoEncomienda, string _dirOrigen, string _dirDestino, int _diaI, int _mesI, int _anioI, int _diaE, int _mesE, int _anioE, bool _entregado, double _pesoEncomienda, Vehiculo _vehiculo)
	:codigoEncomienda(++autonumerico), dirOrigen(_dirOrigen), dirDestino(_dirDestino), fechaIngreso(_diaI, _mesI, _anioI), fechaEntrega(_diaE, _mesE, _anioE), entregado(_entregado), pesoEncomienda(_pesoEncomienda), vehiculo(_vehiculo){};

Encomienda::~Encomienda(){};

void Encomienda::escribirInfo() {
	cout << "" << this->codigoEncomienda << endl;
	cout << "" << this->dirDestino << endl;
	cout << "" << this->dirOrigen << endl;
	cout << "" << (this->entregado ? "Si" : "No") << endl;
	cout << "" << this->pesoEncomienda << endl;
};

void Encomienda::setFechaEntrega(Fecha fecha) {

};

Fecha Encomienda::getFechaEntrega() { return this->fechaEntrega; };

double Encomienda::calcularPrecioEncomienda() {
	double peso = this->getPeso();
};
