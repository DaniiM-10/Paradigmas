//============================================================================
// Name        : TP5_Ejercicio2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Pelicula.h"
using namespace std;

int main() {
	Pelicula* pelicula = new Pelicula("Interstellar", 800.34, TipoPelicula::I, "Christopher Nolan", 54, 7, 11, 2014); // Usando constructor con parametros
	//Pelicula* pelicula = new Pelicula(*peliculaUno);
	//Pelicula* pelicula = new Pelicula(); // Usando constructor por defecto

	pelicula->listarInformacion();
	cout << "Es estreno? : " << ((pelicula->esEstreno()) ? "Si" : "No") << endl;


	return 0;
}
