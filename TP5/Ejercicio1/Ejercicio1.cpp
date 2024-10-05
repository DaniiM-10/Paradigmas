//============================================================================
// Name : punto1.cpp
// Author :
// Version :
// Copyright : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Pila.h"
using namespace std;

int main() {

	Pila pila(3);
	pila.escribir();

	/*cout << "Por Agregacion:" << endl;

	Cuenta cuenta1(1, 123, 2000);
	Cuenta cuenta2(2, 456, 3000);
	Cuenta cuenta3(3, 789, 4000);

	pila.push(&cuenta1);
	pila.push(&cuenta2);
	pila.push(&cuenta3);
	*/

	cout << "Por Composicion:" << endl;

	pila.push(1, 123, 2000);
	pila.push(2, 456, 3000);
	pila.push(3, 789, 4000);

	pila.escribir();

	return 0;
}