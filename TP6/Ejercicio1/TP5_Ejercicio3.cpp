//============================================================================
// Name        : TP5_Ejercicio3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : TP6_Ejercicio1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sistema.h"
#include "Fecha.h"
#include "Auto.h"
#include "Moto.h"

using namespace std;

int main() {
    // Crear el sistema
    Sistema sistema;

    // Crear vehículos
    Auto* auto1 = new Auto("ABC123", 2020, 1500, 500, 100);
    Moto* moto1 = new Moto("XYZ789", 2022, 250, 600);

    // Registrar encomiendas
    cout << "Registrando encomiendas..." << endl;
    sistema.registrarEncomienda("Calle Falsa 123", "Calle Verdadera 456", 120, auto1);
    sistema.registrarEncomienda("Av Siempre Viva 742", "Calle Falsa 123", 50, moto1);

    // Visualizar información de encomiendas registradas
    cout << "\nInformación de encomiendas registradas:" << endl;
    Fecha fechaEntrega1(26, 10, 2024);
    Fecha fechaEntrega2(27, 10, 2024);

    sistema.cargarFechaEntrega(1, fechaEntrega1);
    sistema.cargarFechaEntrega(2, fechaEntrega2);

    // Listar entregas por una fecha específica
    cout << "\nListando entregas para la fecha 26/10/2024:" << endl;
    Fecha fechaConsulta(26, 10, 2024);
    sistema.listarEntregas(fechaConsulta);

    // Liberar memoria
    delete auto1;
    delete moto1;

    return 0;
}