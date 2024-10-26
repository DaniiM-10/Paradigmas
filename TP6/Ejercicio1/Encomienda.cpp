/*
* Encomienda.cpp
*
* Created on: 8 oct 2024
* Author: Danii
*/
#include "Encomienda.h"

int Encomienda::autonumerico = 0;

Encomienda::Encomienda(string _dirOrigen, string _dirDestino, Fecha* fecha, double _pesoEncomienda, Vehiculo* _vehiculo)  // Cambiado a puntero
    : codigoEncomienda(++autonumerico), dirOrigen(_dirOrigen), dirDestino(_dirDestino), fechaIngreso(fecha), entregado(false), pesoEncomienda(_pesoEncomienda), vehiculo(_vehiculo) {}

Encomienda::~Encomienda() {}

void Encomienda::escribirInfo() {
    cout << "Codigo: " << this->codigoEncomienda << endl;
    cout << "Destino: " << this->dirDestino << endl;
    cout << "Origen: " << this->dirOrigen << endl;
    cout << "Entregado: " << (this->entregado ? "Si" : "No") << endl;
    cout << "Peso: " << this->pesoEncomienda << endl;
    cout << "=================================" << endl;
}

void Encomienda::setFechaEntrega(Fecha fecha) {
    this->fechaEntrega = fecha;
    this->entregado = true;
}

Fecha Encomienda::getFechaEntrega() {
    return this->fechaEntrega;
}

int Encomienda::getCodigo() {
    return this->codigoEncomienda;
}

double Encomienda::getPeso() {
    return this->pesoEncomienda;
}

double Encomienda::calcularPrecioEncomienda() {
	double precio = this->vehiculo->calcularPrecioViaje(this->pesoEncomienda);
	return precio;
}

