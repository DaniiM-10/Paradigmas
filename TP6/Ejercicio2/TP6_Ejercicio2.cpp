//============================================================================
// Name        : TP6_Ejercicio2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Libreria.h"
#include "Fecha.h"

using namespace std;

int main() {
    // Crear librería
    Libreria libreria("Mi Libreria");

    // Crear algunos libros
    libreria.crearArticulo("El Principito", 1943, 20.0, "Reynal & Hitchcock", "Antoine de Saint-Exupéry", true);
    libreria.crearArticulo("Cien Años de Soledad", 1967, 25.0, "Sudamericana", "Gabriel García Márquez", true);

    // Crear algunas revistas
    libreria.crearArticulo("National Geographic", 2023, 10.0, 5, 25, "Ciencia y Naturaleza");
    libreria.crearArticulo("Scientific American", 2022, 12.0, 7, 30, "Tecnología");

    // Crear algunas ventas
    libreria.crearVenta(1); // Venta del artículo con código 1 (El Principito)
    libreria.crearVenta(3); // Venta del artículo con código 3 (National Geographic)
    libreria.crearVenta(2); // Venta del artículo con código 2 (Cien Años de Soledad)

    // Intentar crear una venta con un código que no existe
    libreria.crearVenta(5); // Mensaje de "Artículo no encontrado :(" esperado

    // Listar información de ventas en una fecha específica
    Fecha* fechaActual = new Fecha(); // Fecha actual
    cout << "\nVentas realizadas en la fecha: " << endl;
    libreria.listarInfoVentas(fechaActual);

    cout << "\nVentas realizadas el 10/2024: " << libreria.recaudaciones(10, 2024) << endl;

    // Mostrar recaudación en un mes y año específicos
    int mes = fechaActual->getMes();
    int anio = fechaActual->getAnio();
    double recaudacion = libreria.recaudaciones(mes, anio);
    cout << "\nRecaudación para " << mes << "/" << anio << ": $" << recaudacion << endl;

    return 0;
}

