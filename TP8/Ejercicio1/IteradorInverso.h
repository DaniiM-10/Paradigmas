/*
 * IteradorInverso.h
 *
 *  Created on: 14 nov 2024
 *      Author: Danii
 */

#ifndef ITERADORINVERSO_H_
#define ITERADORINVERSO_H_
#include "Iterador.h"

class IteradorInverso : public Iterador{
	public:
		IteradorInverso(Contenedor& _contenedorRef): Iterador(_contenedorRef, (_contenedorRef.capacidad()-1)){};

		bool hayMasElementos(){
			return pos >= 0;
		};
		void avanzar(){
			pos--;
		};
};


#endif /* ITERADORINVERSO_H_ */
