//============================================================================
// Name        : TP5_Ejercicio3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sistema.h"
#include "Encomienda.h"

#include "Moto.h"

using namespace std;

int main() {
    // Crear instancia del sistema
    Sistema sistema;

    // Crear vehículos
    Moto moto("AAA111", 2020, 1000, 50);

    // Registrar encomiendas
    sistema.registrarEncomienda("Origen 1", "Destino 1", 500, &moto);

    // Crear fecha de entrega
    Fecha fechaEntrega(12, 10, 2024);

    // Cargar fecha de entrega a una encomienda
    sistema.cargarFechaEntrega(1, fechaEntrega); // Asumimos que el código de la encomienda es 1

    // Listar entregas para una fecha específica
    sistema.listarEntregas(fechaEntrega);

    return 0;
}