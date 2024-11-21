/*
 * IteradorPar.h
 *
 *  Created on: 14 nov 2024
 *      Author: Danii
 */

#ifndef ITERADORPAR_H_
#define ITERADORPAR_H_
#include "Iterador.h"

class IteradorPar : public Iterador{
	private:
		static const int MULTIPLICADOR = 2;
	public:
		IteradorPar(Contenedor& _contenedorRef): Iterador(_contenedorRef, 0){};

		bool hayMasElementos(){
			return pos < this->contenedorRef.capacidad();
		};
		void avanzar(){
			if(hayMasElementos() != false){
				pos = pos + this->MULTIPLICADOR;
			}
		};
};


#endif /* ITERADORPAR_H_ */
