//============================================================================
// Name        : TP6_Ejercicio3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Almacen.h"
#include "Fecha.h"

using namespace std;

int main() {
    // Crear el objeto Almacen
    Almacen miAlmacen("Supermercado");

    // Crear fechas de vencimiento
    Fecha fechaVencimiento1(2025, 5, 15);
    Fecha fechaVencimiento2(2024, 11, 15);

    // Agregar productos de tipo Alimento
    miAlmacen.crearProducto("Leche Descremada", 50.0, fechaVencimiento1, true);
    miAlmacen.crearProducto("Pan de Molde", 30.0, fechaVencimiento2, false);

    // Agregar productos de tipo Limpieza
    miAlmacen.crearProducto("Detergente", 25.0, true);
    miAlmacen.crearProducto("Jabon en Polvo", 40.0, false);

    // Mostrar los productos del almacen
    cout << "Creo las ventas..." << endl;
    for (int i = 1; i <= 4; i++) {
        miAlmacen.crearVenta(i);  // Crear una venta para cada producto
    }

    miAlmacen.listarVentas();

    // Consultar ventas del mes actual
    Fecha* fechaActual = new Fecha();
    cout << "\nVentas del mes actual (" << fechaActual->getMes() << "/" << fechaActual->getAnio() << "): " << endl;
    float ventasMesActual = miAlmacen.ventasDelMes(fechaActual);
    cout << "Total ventas del mes: $" << ventasMesActual << endl;

    return 0;
}
