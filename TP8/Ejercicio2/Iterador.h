#ifndef ITERADOR_H_
#define ITERADOR_H_

#include <iostream>
#include "Contenedor.h"
using namespace std;

template<class item>
class Iterador{
	protected:
		Contenedor<item>& contenedorRef;
		int pos;
	public:
		Iterador(Contenedor<item>& _contenedorRef, int _pos)
			: contenedorRef(_contenedorRef), pos(_pos){};

		virtual bool hayMasElementos() = 0;
		virtual item elementoActual() {
			return contenedorRef.elemento(pos);
		};
		virtual void avanzar() = 0;

		virtual ~Iterador(){};
};
#endif /* ITERADOR_H_ */
