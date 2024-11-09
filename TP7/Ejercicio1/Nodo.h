#ifndef NODO_H_
#define NODO_H_
#include <iostream>
using namespace std;
typedef int item;

class Nodo {
    item dato;       // Dato que almacena el nodo
    Nodo* siguiente; // Puntero al siguiente nodo

	public:

		Nodo(item d, Nodo*s=NULL):dato(d),siguiente(s){};

		item getDato(){ return dato;};

		Nodo* getSiguiente(){return siguiente;};

		void setDato(item d){dato=d;};

		void setSiguiente(Nodo* s){siguiente=s;};

		virtual ~Nodo(){};
};

#endif