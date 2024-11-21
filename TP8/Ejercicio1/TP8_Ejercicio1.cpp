#include <iostream>
#include "Contenedor.h"
#include "Iterador.h"
#include "IteradorInverso.h"
#include "IteradorPar.h"

void mostrarContenido(Iterador* iterador);

int main() {
    // Crear un contenedor con una capacidad de 10 y valor indefinido de -1
    Contenedor contenedor(10, -1);

    // Insertar algunos elementos en el contenedor
    for (int i = 0; i < 10; i++) {
        contenedor.insertarElemento(i * 10, i);  // Insertar valores 0, 10, 20, ..., 90
    }

    // Crear un iterador inverso
    IteradorInverso iteradorInverso(contenedor);

    std::cout << "Recorriendo contenedor en orden inverso Ejercicio1:" << std::endl;
    /*while (iteradorInverso.hayMasElementos()) {
        std::cout << iteradorInverso.elementoActual() << " ";
        iteradorInverso.avanzar();
    }*/
    mostrarContenido(&iteradorInverso);
    std::cout << std::endl;

    // Crear un iterador par
    IteradorPar iteradorPar(contenedor);

    std::cout << "Recorriendo contenedor en posiciones pares Ejercicio1:" << std::endl;
    mostrarContenido(&iteradorPar);
    /*while (iteradorPar.hayMasElementos()) {
        std::cout << iteradorPar.elementoActual() << " ";
        iteradorPar.avanzar();
    }*/
    std::cout << std::endl;

    return 0;
}

void mostrarContenido(Iterador* iterador) {
	for (; iterador->hayMasElementos(); iterador->avanzar()){
		cout << iterador->elementoActual() << endl;
	}
}
