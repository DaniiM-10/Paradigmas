/*
 * IteradorPar.h
 *
 *  Created on: 14 nov 2024
 *      Author: Danii
 */

#ifndef ITERADORPAR_H_
#define ITERADORPAR_H_
#include "Iterador.h"

template<class item>
class IteradorPar : public Iterador<item>{
	private:
		static const int MULTIPLICADOR = 2;
	public:
		IteradorPar(Contenedor<item>& _contenedorRef): Iterador<item>(_contenedorRef, 0){};

		bool hayMasElementos(){
			return this->pos < this->contenedorRef.capacidad();
		};
		void avanzar(){
			if(hayMasElementos() != false){
				this->pos += this->MULTIPLICADOR;
			}
		};
};


#endif /* ITERADORPAR_H_ */
