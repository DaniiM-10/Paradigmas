/*
 * Sistema.cpp
 *
 *  Created on: 8 oct 2024
 *      Author: Danii
 */
#include "Sistema.h"
#include "Fecha.h"

Sistema::Sistema() {};

Sistema::~Sistema() {
    for(auto encomienda : encomiendas) {
        delete encomienda; // Liberar memoria de las encomiendas
    }
};

void Sistema::registrarEncomienda(string origenE, string destinoE, double pesoE, Vehiculo* vehiculoE) {
    Fecha* fecha = new Fecha();
    Encomienda* nueva_encomienda = new Encomienda(origenE, destinoE, fecha, pesoE, vehiculoE);
    this->encomiendas.push_back(nueva_encomienda);
};

void Sistema::cargarFechaEntrega(int codigo, Fecha fecha) {
    for(auto& enc : encomiendas) {
        if(enc->getCodigo() == codigo) {
            enc->setFechaEntrega(fecha);
        }
    }
};

void Sistema::listarEntregas(Fecha fecha) {
    double recaudacion = 0;
    for(auto& enc : encomiendas) {
        if(this->compararFechas(fecha, enc->getFechaEntrega())) {
            enc->escribirInfo();
            recaudacion += enc->calcularPrecioEncomienda();
        }
    }
    cout << "Recaudacion Total: $" << recaudacion << endl;
};

bool Sistema::compararFechas(Fecha fecha1, Fecha fecha2) {
    if (fecha1.getDia() == fecha2.getDia()) {
        if (fecha1.getMes() == fecha2.getMes()) {
            if (fecha1.getAnio() == fecha2.getAnio()) {
                return true;
            }
        }
    }
    return false;
}

