//============================================================================
// Name        : Ejercicio2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Pelicula.h"
using namespace std;

int main() {
	cout << "Constructores:" << endl;
    Pelicula pelicula1; // Usando el constructor pro defecto
    Pelicula pelicula2("Inception", "Christopher Nolan", true, 10.0, TipoPelicula::N); // Usando el constructor con parametros
    Pelicula pelicula3("Parasite", "Bong Joon-ho", false, 8.0, TipoPelicula::I); // Usando el constructor con parametros
    Pelicula pelicula4(pelicula2); // Usando el constructor copia
    cout << "==================================" << endl;

    cout << "Información de pelicula1:" << endl;
    pelicula1.listarInformacion();
    cout << endl;

    cout << "Información de pelicula2:" << endl;
    pelicula2.listarInformacion();
    cout << endl;

    cout << "Información de pelicula3:" << endl;
    pelicula3.listarInformacion();
    cout << endl;

    cout << "Información de pelicula4 (copia de pelicula2):" << endl;
    pelicula4.listarInformacion();
    cout << endl;

    cout << "Costo de pelicula1: " << pelicula1.calcularCosto() << endl;
    cout << "Costo de pelicula2: " << pelicula2.calcularCosto() << endl;
    cout << "Costo de pelicula3: " << pelicula3.calcularCosto() << endl;
    cout << "Costo de pelicula4: " << pelicula4.calcularCosto() << endl;

    cout << "==================================" << endl;
    cout << "Destructores:" << endl;

    return 0;
}
