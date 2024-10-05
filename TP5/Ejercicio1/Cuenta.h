/*
* Cuenta.h
*
* Created on: 4 oct 2024
* Author: Danii
*/

#ifndef CUENTA_H_
#define CUENTA_H_
#include <iostream>
using namespace std;


class Cuenta {
	private:
		int numero;
		long dniTitular;
		double saldo;
	public:
		Cuenta();
		Cuenta(int _numero, long _dniTitular, double _saldo);
		~Cuenta();
		bool depositar(double monto);
		bool extraer(double monto);
		double getSaldo();
		void mostrarInformacion();
};


#endif /* CUENTA_H_ */