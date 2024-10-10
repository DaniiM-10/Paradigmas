/*
* Pila.cpp
*/
#include <iostream>
#include "Pila.h"
using namespace std;

item * Pila:: reservarMemoria(int dim){
	item *reserva = new item[dim];
	if(reserva==NULL){
		cout<<"Problema: no se pudo realizar la reserva";
	}
	return reserva;
}

Pila::Pila(int dim){
	MAX = dim >0 ? dim : 10;
	tope=-1;
	arreglo = reservarMemoria(MAX);
}

/*void Pila ::push(item item){ // Caso de Agregacion
	if(tope+1 tope++;
		arreglo[tope] = item;
	}
}*/
void Pila ::push(int numero, long dniTitular, double saldo){ // Caso de Composicion
	if(tope+1){
		tope++;
		arreglo[tope] = new Cuenta(numero, dniTitular, saldo);
	}
}

/*void Pila:: pop(){ // Caso de Agregacion
	if(tope>=0){
		tope--;
	}
}*/
void Pila:: pop(){ // Caso de Composicion
	if(tope>=0){
		delete arreglo[tope];
		tope--;
	}
}

item Pila:: top() {
	if(!esPilavacia())
		return arreglo[tope];
	else
		return indefinido;
}

bool Pila:: esPilavacia(){
	return tope==-1;
}

void Pila::escribir(){
	cout << endl<<" PILA INT: (implementación Pila de int)" << endl;
	for(int i=tope; i >= 0;i-- ){
		arreglo[i]->mostrarInformacion();
	}
}

Pila::~Pila(){
	tope = -1;
	MAX = 0;
	for (int i = tope; i >= 0; i--) {
		delete arreglo[i];
	}
	delete []arreglo;
}
