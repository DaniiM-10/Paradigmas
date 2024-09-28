//============================================================================
// Name        : Ejercicio1_Nuevo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Cuenta.h"
#include <iostream>

void transferir(Cuenta* cuenta1, Cuenta* cuenta2);

int main() {
	Cuenta cuenta1(54, 17886682356, 1000.0);
	Cuenta cuenta2(11, 87678777843, 500.0);
    //Cuenta* cuenta1 = new Cuenta(54, 17886682356, 1000.0);
    //Cuenta* cuenta2 = new Cuenta(11, 87678777843, 500.0);

    std::cout << "Datos de las cuentas (antes de la transferencia):" << std::endl;
    cuenta1.mostrarInfo();
    //cuenta1->mostrarInfo();
    std::cout << "===========================================" << std::endl;
    cuenta2.mostrarInfo();
    //cuenta2->mostrarInfo();

    transferir(&cuenta1, &cuenta2);
    //transferir(cuenta1, cuenta2);

    std::cout << std::endl;
    std::cout << "Datos de las cuentas (despues de la transferencia):" << std::endl;
    cuenta1.mostrarInfo();
    //cuenta1->mostrarInfo();
    std::cout << "===========================================" << std::endl;
    cuenta2.mostrarInfo();
    //cuenta2->mostrarInfo();

    //delete cuenta1;
    //delete cuenta2;

    return 0;
}

void transferir(Cuenta* cuenta1, Cuenta* cuenta2) {
    double guitaExtraida = 100;
    bool verific = cuenta1->extraer(guitaExtraida);

    if (!verific) {
        std::cerr << "Error: no se pudo extraer dinero de la cuenta 1." << std::endl;
    }

    verific = cuenta2->depositar(guitaExtraida);
    if (!verific) {
        std::cerr << "Error: no se pudo depositar dinero en la cuenta 2." << std::endl;
    }
}
