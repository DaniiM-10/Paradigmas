/*
 * Persona.cpp
 *
 *  Created on: 5 oct 2024
 *      Author: Danii
 */

#include "Persona.h"

Persona::Persona(string _nombre, int _edad)
	: nombre(_nombre), edad(_edad){};

Persona::~Persona(){};

void Persona::biografia() { cout << "Mi nombre es " << (nombre.empty() ? "Desconocido": nombre) << ", y tengo " << edad << " años." << endl; }

string Persona::getNombre() { return this->nombre; }

int Persona::getEdad() { return this->edad; }
