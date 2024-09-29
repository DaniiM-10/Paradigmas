/*
 * Fila.cpp
 *
 *  Created on: 26 sept 2024
 *      Author: Danii
 */
#include "Fila.h"

int Fila::frente = -1;
int Fila::final = -1;

Fila::Fila(){}

void Fila::FilaVacia() {
	this->final = nullptr;
	this->frente = nullptr;
	this->longitud = 0;
}

bool Fila::EsFilaVacia() { return (this->frente == nullptr); }

item Fila::Frente() {
	return (this->EsFilaVacia()) ? INDEFINIDO : this->frente->dato;
}

void Fila::Enfila(item dato) {
	Nodo* nuevo_nodo = new Nodo;
	nuevo_nodo->dato = dato;
	nuevo_nodo->siguiente = nullptr;

	if(this->EsFilaVacia()) {
		this->final = nuevo_nodo;
		this->frente = nuevo_nodo;
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
		 /*
		this->frente = this->frente->siguiente;
		delete nodo_borrar;
		this->longitud--;
		 */
	}
}


bool Fila::Pertenece(item dato) {
	if(this->EsFilaVacia()) {
		return false;
	} else {
		bool comparar = this->frente->dato == dato;

	}
}