#ifndef ITERADOR_H_
#define ITERADOR_H_
#include "Fila.h"
using namespace std;

template<class item>
class Iterador{
		const Fila<item> &fila;
		Nodo<item>* actual;
	public:
		Iterador(const Fila<item> &filita):fila(filita),actual(filita.frente){};
		//Iterador(const Lista &l):actual(l.lista){};
		bool hayMasElementos(){
			return actual!=NULL;
		};
		item elementoActual(){
			return actual->getDato();
		};
		void avanzar(){
			actual=actual->getSiguiente();
		};
};
#endif /* ITERADOR_H_ */