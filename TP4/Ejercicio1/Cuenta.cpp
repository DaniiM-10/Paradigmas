/*
 * Cuenta.cpp
 *
 *  Created on: 25 sept 2024
 *      Author: Danii
 */

#include "Cuenta.h"

Cuenta::Cuenta(int _numero, long long _dniTitular, double _saldo)
    : numero(_numero), dniTitular(_dniTitular), saldo(_saldo <= 0 ? 0 : _saldo) {}
Cuenta::~Cuenta(){}

bool Cuenta::depositar(double _monto) {
    if (_monto < 0) return false;
    saldo += _monto;
    return true;
}
bool Cuenta::extraer(double _monto) {
    if (saldo < _monto || _monto < 0) {
        return false;
    } else {
        saldo -= _monto;
        return true;
    }
}
double Cuenta::getSaldo() const {
    return saldo;
}
void Cuenta::mostrarInfo() {
    std::cout << "Numero: " << numero << std::endl;
    std::cout << "DNI: " << dniTitular << std::endl;
    std::cout << "Saldo: " << getSaldo() << std::endl;
}
