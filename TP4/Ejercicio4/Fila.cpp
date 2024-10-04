/*
* Fila.cpp
*
* Created on: 26 sept 2024
* Author: Danii
*/
#include "Fila.h"

Fila::Fila() {
	this->frente = nullptr;
	this->final = nullptr;
	this->longitud = 0;
}

Fila::Fila(const Fila &fila) {
	frente = fila.frente;
	final = fila.frente;
	longitud = fila.longitud;
}

Fila::~Fila(){}

bool Fila::EsFilaVacia() { return (this->frente == nullptr); }

item Fila::Frente() {
	return (this->EsFilaVacia()) ? INDEFINIDO : this->frente->dato;
}

void Fila::Enfila(item dato) {
	Nodo* nuevo_nodo = new Nodo(dato);
	nuevo_nodo->siguiente = nullptr;

	if(this->EsFilaVacia()) {
		this->frente = nuevo_nodo;
		this->final = nuevo_nodo;
	} else {
		this->final->siguiente = nuevo_nodo;
		this->final = nuevo_nodo;
	}
	this->longitud++;
}

int Fila::Longitud() { return this->longitud; }

void Fila::Defila() {
	if(!this->EsFilaVacia()) {
		Nodo* nodo_borrar = this->frente;
		this->frente = this->frente->siguiente;
		delete nodo_borrar;
		this->longitud--;
	}
}

bool Fila::Pertenece(item dato) {
	if(this->EsFilaVacia()) {
		return false;
	} else {
		bool comparar = this->frente->dato == dato;
		this->frente = this->frente->siguiente;
		return comparar || Pertenece(dato);
	}
}

void Fila::Mostrar() {
	Fila* fila_aux = this;
	 if (this->EsFilaVacia()) {
        cout << "La Fila esta vacia" << endl;
	} else {
		Nodo* actual = fila_aux->frente; // Asignamos la cabecera de la lista a un nodo auxiliar
		while (actual != nullptr) { // Mientras la cabecera actual no sea nulo
			cout << actual->dato << endl;
			actual = actual->siguiente; // Avanzo al proximo nodo
		}
	}
}
