/*
 * Fila.h
 *
 *  Created on: 26 sept 2024
 *      Author: Danii
 */

#ifndef FILA_H_
#define FILA_H_
#include "Nodo.h"

class Fila {
	private:
		Nodo* final;
		Nodo* frente;
		int longitud;
	public:
		Fila();
		~Fila();
		void FilaVacia();
		bool EsFilaVacia();
		item Frente();
		void Enfila(item dato);
		void Defila();
		int Longitud();
		bool Pertenece(item dato);
		void Mostrar();
};

#endif /* FILA_H_ */
