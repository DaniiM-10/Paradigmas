/*
 * IteradorInverso.h
 *
 *  Created on: 14 nov 2024
 *      Author: Danii
 */

#ifndef ITERADORINVERSO_H_
#define ITERADORINVERSO_H_
#include "Iterador.h"

template<class item>
class IteradorInverso : public Iterador<item>{
	public:
		IteradorInverso(Contenedor<item>& _contenedorRef): Iterador<item>(_contenedorRef, _contenedorRef.capacidad()-1){};

		bool hayMasElementos(){
			return this->pos >= 0;
		};
		void avanzar(){
			this->pos--;
		};
};


#endif /* ITERADORINVERSO_H_ */
