
#ifndef FILA_H_
#define FILA_H_

#include <iostream>
#include <stdexcept>
#include "Nodo.h"
using namespace std;

class Fila {
    private:
        Nodo* frente;
        Nodo* final;
        int longitud;

    public:
    
    Fila() : frente(nullptr), final(nullptr), longitud(0) {};

    ~Fila() {
        for (int i = 0; i < longitud; i++)
        {
            Defila();
        }
    };

    bool EsFilaVacia() const {
        return frente == nullptr;
    };

    void Enfila(item elemento) {
        Nodo* nuevoNodo = new Nodo(elemento);
        if (EsFilaVacia()) {
            frente  = nuevoNodo;
        } else {
            final->setSiguiente(nuevoNodo);
        }
        final = nuevoNodo;
        longitud++;
    };

    void Defila() {
        if (EsFilaVacia()) return;
        Nodo* temp = frente;
        frente = frente->getSiguiente();
        delete temp;
        longitud--;
        if (EsFilaVacia()) {
            final = nullptr;
        }
    };

    item Frente() const {
        if (EsFilaVacia()) throw std::runtime_error("La fila esta vacia");
        return frente->getDato();
    };

    int Longitud() const {
        return longitud;
    };

    bool Pertenece(item elemento) const {
        Nodo* actual = frente;
        while (actual != nullptr) {
            if (actual->getDato() == elemento) {
                return true;
            }
            actual = actual->getSiguiente();
        }
        return false;
    };

    void Mostrar() const {
        Nodo* actual = frente;
        while (actual != nullptr) {
            std::cout << actual->getDato() << " ";
            actual = actual->getSiguiente();
        }
        std::cout << std::endl;
    };

    Fila(const Fila& otraFila) : frente(nullptr), final(nullptr), longitud(0) {
        Nodo* actual = otraFila.frente;
        while (actual != nullptr) {
            Enfila(actual->getDato());
            actual = actual->getSiguiente();
        }
    };

    item ObtenerElemento(int posicion) const {
        if (posicion < 0 || posicion >= longitud) {
            throw std::out_of_range("Posicion fuera de rango");
        }
        Nodo* actual = frente;
        for (int i = 0; i < posicion; i++) {
            actual = actual->getSiguiente();
        }
        return actual->getDato();
    };

    friend class Iterador;
};

#endif
