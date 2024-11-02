/*
 * main.cpp
 *
 *  Created on: 27 oct 2024
 *      Author: Danii
 */

#include "Restaurant.h"
#include "Fecha.h"
#include <iostream>

int main() {
    // Crear el restaurante
    Restaurant miRestaurante("El Buen Sabor");

    // Crear algunos artículos (bebidas y platillos)
    miRestaurante.crearArticulo("Coca Cola", 1.5, 500);  // bebida de 500ml
    miRestaurante.crearArticulo("Agua Mineral", 1.0, 600);  // bebida de 600ml
    miRestaurante.crearArticulo("Pizza Margarita", 5.0, "Pizza Margarita");  // platillo
    miRestaurante.crearArticulo("Hamburguesa Clásica", 6.5, "Hamburguesa Clásica");  // platillo

    // Crear algunos ingredientes para un platillo
    Ingrediente queso("Queso Mozzarella", 0.5);
    Ingrediente tomate("Rodajas de Tomate", 0.3);

    // Añadir ingredientes extra a un platillo (por ejemplo, al pedido de Pizza Margarita)
    miRestaurante.crearPedido(3); // Pedido con Pizza Margarita
    miRestaurante.agregarIngredienteExtra(&queso, 1); // Agregar queso al pedido
    miRestaurante.agregarIngredienteExtra(&tomate, 1); // Agregar tomate al pedido

    // Crear otros pedidos
    miRestaurante.crearPedido(1); // Pedido con Coca Cola
    miRestaurante.crearPedido(4); // Pedido con Hamburguesa Clásica

    // Crear una fecha para calcular la recaudación
    Fecha fechaHoy(2024, 10, 27);

    // Listar información de los pedidos
    cout << "\nListar información de los pedidos:" << endl;
    for (auto pedido : miRestaurante.getPedidos()) {
        pedido->listarInfoArticulos();
    }

    // Calcular y mostrar recaudación del día
    float recaudacion = miRestaurante.recaudacionDelDia(fechaHoy);
    cout << "\nRecaudación del día: $" << recaudacion << endl;

    return 0;
}

