//============================================================================
// Name        : TP4 - PruebaFila.cpp
// Author      : Catedra Paradigmas de Programacion - FACET - UNT
//============================================================================

#include <iostream>

#include "Fila.h"
#include "Iterador.h"

using namespace std;

template <class item>
int contarX(Fila<item> fila, item X);

int main()
{

	// Creo un objeto fila con el constructor por defecto

	Fila<char> F;

	// Controlo si la fila fue inicializada correctamente con el constructor

	if (F.EsFilaVacia())
		cout << "CORRECTO - La Fila esta vacia" << endl;
	else
		cout << "ERROR - La Fila deberia estar vacia" << endl;

	// Ingreso 3 items a la fila muestro el frente de la fila y la fila completa

	for (int i = 0; i < 5; i++)
	{
		F.Enfila('a' + i);
	}

	 F.Enfila(1);
	// F.Enfila(2);
	// F.Enfila(3);

	cout << "El frente de la fila es: " << F.Frente() << endl;

	cout << "Contenido de la fila luego de insertar 3 items" << endl;
	F.Mostrar();

	// Escribo la longitud de la fila
	cout << "Longitud de la fila luego de insertar 3 items: " << F.Longitud() << endl;

	// Elimino el frente de la fila y muestro la fila
	F.Defila();

	cout << "Contenido de la fila luego de eliminar el frente" << endl;
	F.Mostrar();

	// Pruebo la operaci�n Pertenece con un elemento que se encuentra en la fila
	if (F.Pertenece('b'))
		cout << "CORRECTO - El elemento pertenece a la fila" << endl;
	else
		cout << "ERROR - El elemento si pertence a la fila" << endl;

	// Pruebo la operaci�n Pertenece con un elemento que se encuentra en la fila
	if (F.Pertenece('z'))
		cout << "ERROR - El elemento NO pertenece a la fila" << endl;
	else
		cout << "CORRECTO - El elemento no pertence a la fila" << endl;

	// PUNTO 4) c.

	/*
	// Invoco a la operacion externa concctarX que trabaja sobre una copia local del par�metro fila
	int cantidad = contarX(F, 3);

	cout<<"Cantidad de elenentos iguales a X:  "<<cantidad<<endl;


	// Muestro por pantalla la fila luego de la invocacion a la operaci�n mostrar
	cout<<"Muestro por pantalla la fila luego de invocar a la operacion externa contarX"<<endl;
	F.Mostrar();
	*/
	int cantidad = contarX(F, 'a');
	cout << "Cantidad de elenentos iguales a 'a':  " << cantidad << endl;
	cout << "Muestro por pantalla la fila luego de invocar a la operacion externa contarX" << endl;
	F.Mostrar();
	cout << endl
		 << "Escribo la lista desde el main con ITERADOR" << endl;

	Iterador<char> it(F);

	for (; it.hayMasElementos(); it.avanzar())
	{
		cout << it.elementoActual() << " - ";
	}
	cout << endl;

	if (F.EsFilaVacia())
		cout << "Lista vacia" << endl;
	else
		cout << "Lista con elementos" << endl;

	if (F.Pertenece(2))
		cout << "Pertenece" << endl;
	else
		cout << "NO Pertenece" << endl;

	cout << contarX(F,'d') << endl;
	cout << "Cantidad de elenentos iguales a 'd':  " << cantidad << endl;
	return 0;
}

template <class item>
int contarX(Fila<item> fila, item X)
{
	Iterador<item> it(fila);
	int contador = 0;
	for (; it.hayMasElementos(); it.avanzar())
	{
		if (it.elementoActual() == X)
		{
			contador=contador+1;
		}
	}
	return contador;
}
