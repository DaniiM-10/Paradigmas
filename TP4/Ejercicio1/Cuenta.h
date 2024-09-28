/*
 * Cuenta.h
 *
 *  Created on: 25 sept 2024
 *      Author: Danii
 */

#ifndef CUENTA_H_
#define CUENTA_H_
#include <iostream>

class Cuenta {
    private:
        int numero;
        long long dniTitular;
        double saldo;
    public:
        Cuenta(int _numero, long long _dniTitular, double _saldo);
        ~Cuenta();
        bool depositar(double _monto);
        bool extraer(double _monto);
        double getSaldo() const;
        void mostrarInfo();
};


#endif /* CUENTA_H_ */
