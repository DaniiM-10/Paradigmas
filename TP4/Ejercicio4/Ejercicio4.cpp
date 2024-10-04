//============================================================================
// Name        : TP4 - PruebaFila.cpp
// Author      : C�tedra Paradigmas de Programaci�n - FACET - UNT
//============================================================================

#include <iostream>

#include "Fila.h"

using namespace std;

int contarX(Fila F, item X);

int main() {

	// Creo un objeto fila con el constructor por defecto
	Fila F;

	// Controlo si la fila fue inicializada correctamente con el constructor
	if(F.EsFilaVacia())
		cout<<"CORRECTO - La Fila esta vacia"<<endl;
	else
		cout<<"ERROR - La Fila deberia estar vacia"<<endl;

	// Ingreso 3 items a la fila muestro el frente de la fila y la fila completa
	F.Enfila(1);
	F.Enfila(2);
	F.Enfila(3);

	/*cout<<"El frente de la fila es: "<<F.Frente()<<endl;

	cout<<"Contenido de la fila luego de insertar 3 items"<<endl;
	F.Mostrar();

	// Escribo la longitud de la fila
	cout<<"Longitud de la fila luego de insertar 3 items: "<<F.Longitud()<<endl;

	// Elimino el frente de la fila y muestro la fila
	F.Defila();

	cout<<"Contenido de la fila luego de eliminar el frente"<<endl;
	F.Mostrar();

	// Pruebo la operaci�n Pertenece con un elemento que se encuentra en la fila
	if(F.Pertenece(3))
			cout<<"CORRECTO - El elemento pertenece a la fila"<<endl;
		else
			cout<<"ERROR - El elemento si pertence a la fila"<<endl;

	// Pruebo la operaci�n Pertenece con un elemento que se encuentra en la fila
	if(F.Pertenece(999))
			cout<<"ERROR - El elemento NO pertenece a la fila"<<endl;
		else
			cout<<"CORRECTO - El elemento no pertence a la fila"<<endl;*/

	// PUNTO 4) c.
	/*
	// Invoco a la operacion externa contarX que trabaja sobre una copia local del par�metro fila
	int cantidad = contarX(F, 3);

	cout<<"Cantidad de elenentos iguales a X:  "<< cantidad<<endl;


	// Muestro por pantalla la fila luego de la invocacion a la operaci�n mostrar
	cout<<"Muestro por pantalla la fila luego de invocar a la operacion externa contarX"<<endl;
	F.Mostrar();
	 */

	// Prueba constructor copia
	Fila F1(F);

	cout<<"El frente de la fila COPIA es: "<<F1.Frente()<<endl;

	cout<<"Contenido de la fila COPIA: "<<endl;
	F1.Mostrar();

	// Escribo la longitud de la fila
	cout<<"Longitud de la fila COPIA: "<<F1.Longitud()<<endl;

	// Elimino el frente de la fila y muestro la fila
	F1.Defila();

	cout<<"Contenido de la fila COPIA luego de eliminar el frente"<<endl;
	F1.Mostrar();

	// Pruebo la operaci�n Pertenece con un elemento que se encuentra en la fila
	if(F1.Pertenece(3))
			cout<<"CORRECTO - El elemento pertenece a la fila COPIA"<<endl;
		else
			cout<<"ERROR - El elemento si pertence a la fila COPIA"<<endl;

	// Pruebo la operaci�n Pertenece con un elemento que se encuentra en la fila
	if(F1.Pertenece(999))
			cout<<"ERROR - El elemento NO pertenece a la fila COPIA"<<endl;
		else
			cout<<"CORRECTO - El elemento no pertence a la fila COPIA"<<endl;
	return 0 ;
}

int contarX(Fila F, item X) {
	/*if(F.EsFilaVacia()) {
		return 0;
	} else {
		if(F.Frente() == X) {
			F.Defila();
			return 1 + contarX(F, X);
		} else {
			F.Defila();
			return contarX(F, X);
		}
	}*/
}
