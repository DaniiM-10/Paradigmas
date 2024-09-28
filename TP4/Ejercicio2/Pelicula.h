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
using namespace std;

enum class TipoPelicula { N, I };

class Pelicula {
    private:
        static int autonumerico;
        int codigo;
        string titulo;
        string director;
        bool estreno;
        float precioBase;
        TipoPelicula tipoPelicula;
    public:
        Pelicula(); // Constr. por defecto
        Pelicula(string _titulo, string _director, bool _estreno, float _precioBase, TipoPelicula _tipoPelicula); // Constr. con parametros
        Pelicula(const Pelicula &co); // Constr. copia
        void listarInformacion();
        float calcularCosto();
        ~Pelicula();
};


#endif /* PELICULA_H_ */
