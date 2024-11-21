#ifndef ITERADOR_H_
#define ITERADOR_H_
#include <iostream>
#include "Contenedor.h"
using namespace std;

class Iterador{
	protected:
		Contenedor& contenedorRef;
		int pos;
	public:
		Iterador(Contenedor& _contenedorRef, int _pos)
			: contenedorRef(_contenedorRef), pos(_pos){};

		virtual bool hayMasElementos() = 0;
		virtual int elementoActual() {
			return contenedorRef.elemento(pos);
		};
		virtual void avanzar() = 0;

		virtual ~Iterador(){};
};
#endif /* ITERADOR_H_ */
