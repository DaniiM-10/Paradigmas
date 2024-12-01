//============================================================================
// Name        : TP8_Ejercicio4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Sucursal.h"
#include "Tradicional.h"
#include "Exotico.h"
using namespace std;

int main() {
	Sucursal* sucursal1 = new Sucursal("direccion 1");

	// CREO 3 CLIENTES
	sucursal1->agregarCliente(new Cliente("prueba1", "prueba1@gmail.com"));
	sucursal1->agregarCliente(new Cliente("prueba2", "prueba2@gmail.com"));
	sucursal1->agregarCliente(new Cliente("prueba3", "prueba3@gmail.com"));

	// CREO 3 MASCOTAS
	sucursal1->agregarMascota(1, new Tradicional("pepito", 2, 10, 2022, "piwi"));
	sucursal1->agregarMascota(1, new Exotico("tobi", 23, 6, 2015, "rara", "perro raro picante"));
	sucursal1->agregarMascota(3, new Tradicional("El bobi", 8, 5, 2018, "tradicional del cliente 3"));
	sucursal1->agregarMascota(3, new Tradicional("El bobi 2.0", 8, 5, 2022, "tradicional del cliente 31"));

	// CREO CONTROLES
	sucursal1->agregarControl(1, 2, "control 1", 699.0, 25, 11, 2024);
	sucursal1->agregarControl(3, 4, "control 2 del trad", 488.0, 24, 11, 2024);

	// MUESTRO INFO NASHE
	sucursal1->resumen(11, 2024);
	sucursal1->listarProximosCtroles(3);

	return 0;
}
