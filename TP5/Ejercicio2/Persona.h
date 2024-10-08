/*
 * Persona.h
 *
 *  Created on: 5 oct 2024
 *      Author: Danii
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include <iostream>
using namespace std;


class Persona {
	private:
		string nombre;
		int edad;
	public:
		Persona(string, int);
		~Persona();
		void biografia();
		string getNombre();
		int getEdad();
};


#endif /* PERSONA_H_ */
