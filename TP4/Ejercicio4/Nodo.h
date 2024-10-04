/*
* Nodo.h
*
* Created on: 28 sept 2024
* Author: Danii
*/

#ifndef NODO_H_
#define NODO_H_
#include <iostream>
using namespace std;

typedef int item;
const item INDEFINIDO = -99999;

class Nodo {
	public:
	item dato;
	Nodo* siguiente;
	Nodo(item _dato);
};

#endif /* NODO_H_ */
