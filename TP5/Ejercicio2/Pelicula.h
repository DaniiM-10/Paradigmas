/*
 * Pelicula.h
 *
 *  Created on: 26 sept 2024
 *      Author: Danii
 */

#ifndef PELICULA_H_
#define PELICULA_H_
#include <iostream>
#include <string.h>
#include "Persona.h"
#include "Fecha.h"
using namespace std;

enum class TipoPelicula { N, I };

class Pelicula {
    private:
        static int autonumerico;
        int codigo;
        string titulo;
        Persona director;
        Fecha estreno;
        float precioBase;
        TipoPelicula tipoPelicula;
        float calcularCosto();
    public:
        Pelicula(); // Constr. por defecto
        Pelicula(string _titulo, float _precioBase, TipoPelicula _tipoPelicula, string _nombreDirector, int _edadDirector, short _dia, short _mes, short _anio); // Constr. con parametros
        Pelicula(const Pelicula &co); // Constr. copia
        void getBiografiaDirector();
        void listarInformacion();
        bool esEstreno();
        ~Pelicula();
};


#endif /* PELICULA_H_ */
