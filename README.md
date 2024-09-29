# Paradigmas

## TP4:
### 3)- Teniendo en cuenta la clase CuentaObjeto que permite registrar la cantidad de objetos creados y objetos destruidos:
- **a)** Analice el programa de prueba y el código de implementación de la clase CuentaObjeto disponible en el Aula Virtual.
- **b)** Ejecute el programa de prueba y analice la información que presenta el método mostrarResumen() en cada una de las invocaciones e identifique en el código el momento en que se crean y destruyen los objetos.
    - Primero se crea un objeto con el constructor por defecto, el 1° Resumen muestra cuantos objetos se crearon (1) y cuantos se destruyeron (0).
    - Se crea un objeto 2 que se copia del objeto 1, el 2° Resumen muestra cuantos objetos se crearon (2) y cuantos se destruyeron (0).
    - Se crea un objeto 3 con el constructor por defecto a traves del operador NEW, el 3° Resumen muestra cuantos objetos se crearon (3) y cuantos se destruyeron (0).
    - Se invoca la funcion metodo1 del objeto 2, se envia el objeto 1 por parametro (por referencia) y retorna el mismo objeto que se guardara en objeto 1, el 4° Resumen muestra cuantos objetos se crearon (3) y cuantos se destruyeron (0).
    - Se invoca la funcion metodo2 del objeto 3, se envia el objeto 1 por parametro (por valor, es decir que se crea una copia del objeto 1) y retorna una copia de esa copia que se crea del objeto 1, luego se destruyen al terminar la ejecucion del metodo, el 5° Resumen muestra cuantos objetos se crearon (5) y cuantos se destruyeron (2).
    - Luego de mostrar el 5° Resumen, aparece un mensaje de un destructor, este hace referencia a que se destruyo el objeto 2, ya que este estaba creado (sin NEW) dentro de un bloque, y este bloque se cerró al final de la muestra del 5° Resumen. El 6° Resumen muestra cuantos objetos se crearon (5) y cuantos se destruyeron (3).
    - Por ultimo se destruye el objeto 1.
    - Al final no se destruye el objeto 3 (creado con NEW), ya que no usamos el DELETE para llamar al destructor de la clase.
- **c)** ¿Existe algún objeto que haya sido creado en el programa de prueba y no haya sido destruido al finalizar el programa? ¿A qué se debe esto?
    - Al final no se destruye el objeto 3 (creado con NEW), ya que no usamos el DELETE para llamar al destructor de la clase.