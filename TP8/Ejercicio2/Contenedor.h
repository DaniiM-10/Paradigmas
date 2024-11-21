/*
 * CONTENEDOR.h
 *
 */

#ifndef CONTENEDOR_H_
#define CONTENEDOR_H_

template<class item>
class Iterador;

#include <iostream>
using namespace std;

template<class item>
class Contenedor{
	const item indefinido;
	item *arreglo;
	int MAX;
	item* reservarMemoria(unsigned int tama);
public:
		Contenedor(unsigned int dim, item indef);
		bool insertarElemento(item valor, int posicion);
		item  elemento(int posicion);
		bool eliminarElemento(int posicion);
		void escribir();
		int capacidad();
		~Contenedor();

		friend class Iterador<item>;
};

template<class item>
item* Contenedor<item>::reservarMemoria(unsigned int tama){
	item *reserva = new item[tama];
	if(reserva==NULL){
		cout<<"Problema: no se pudo realizar la reserva";
	}
	return reserva;
}
template<class item>
Contenedor<item>::Contenedor(unsigned int dim, item indef):indefinido(indef){
	this->MAX = dim;
	this->arreglo = reservarMemoria(this->MAX);
	if (this->arreglo ==NULL)
		this->MAX = 0;
	else
		for(int i=0;i<this->MAX;i++)
			this->arreglo[i]=this->indefinido;
}

template<class item>
bool Contenedor<item>::insertarElemento(item valor, int posicion){
	bool resultado=  false;
	if(0<=posicion && posicion< this->MAX){
		this->arreglo[posicion] = valor;
		resultado =true;
	}
	return resultado;
}

template<class item>
item Contenedor<item>::elemento(int posicion){
	if(0<=posicion && posicion<this->MAX)
		return this->arreglo[posicion];
	else
		return this->indefinido;
}

template<class item>
bool Contenedor<item>::eliminarElemento(int posicion){
	bool resultado = false;
	if(0<=posicion && posicion<this->MAX){
		this->arreglo[posicion]=this->indefinido;
		resultado = true;
	}
	return resultado;
}

template<class item>
int Contenedor<item>::capacidad(){
	return this->MAX;
}

template<class item>
Contenedor<item>::~Contenedor(){
	this->MAX = 0;
	delete [] this->arreglo;
};


#endif /* CONTENEDOR_H_ */
