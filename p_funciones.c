#include <stdio.h> //Se incluye el archivo de cabecera standard input-output para poder efectuar la operación de imprimir el resultado.

/* Declaración de funciones */
/*Función que recibe un apuntador a función que recibe un entero y devuelve un entero, y
el segundo parámetro formal que recibe la función es un entero; devuelve un entero.*/
int misterio1(int (*fun) (int), int); 
/*Función que recibe un apuntador a función que recibe un entero y devuelve un entero, y
el segundo parámetro formal que recibe la función es un entero; devuelve un entero.*/
void misterio2(void (*fun) (int), int);
int cuadrado_num(int); //Función que recibe un entero y su valor de regreso también es un entero.
void imprime_num(int); //Función que no devuelve nada y recibe un entero.

int main() //Declaración del main, que es el núcleo del programa y dictamina el flujo de ejecución del mismo.
{
	/*Se declaran un par de apuntadores a funciones.*/
  int (*fun1) (int); //El primer apuntador a función recibe un entero y devuelve un entero.
  void (*fun2) (int); //El otro apuntador a función también recibe un entero, pero no devuelve nada.

  /*Los apuntadores creados previamente ahora van a apuntar a 
  las direcciones en memoria de dos funciones.*/
  fun1 = &cuadrado_num; //El primero apunta a la dirección de memoria de la función que calcula el cuadrado de un número.
  fun2 = &imprime_num; //El segundo apuntador a función apunta a la dirección de memoria de la función que imprime un número en la salida estándar.
  int var = misterio1(fun1, 3); /*Se declara una variable a inicializa con la fun1 aplicado al entero 3 (pues
  								misterio1 aplica la función de la que se tiene referencia por el apuntador a la función al segundo parámetro). Dado que
  								fun1 es un apuntador a la función que calcula cuadrados de números enteros, lo que se hace es calcular el cuadrado de 3, es decir, 
  								se regresa un 9 que es asignado a la variable 'var'.*/
  misterio2(fun2, var); /*Finalmente, la referencia que se tiene a la función que imprime en la salida estándar gracias al apuntador a función fun2
  						que previamente tomó como valor la dirección de memoria de la función imprime_num, es aplicada al segundo parámetro actual 
  						que recibe misterio2. Entonces simplemente se aplica la función de imprimir 'var' en la salida estándar y no regresa nada, pero
  						como el valor de var es 9, imprime 'Tada: 9' como salida, segudido de su salto de línea.*/
}

/*
* Aplica la función de la que se tiene una referencia 
* (dado que se recibe un apuntador a la misma, que recibe un entero 
* y devuelve un entero) al segundo parámetro formal de la función, 
* que es un entero. El valor calculado es el valor de regreso de la función.
*/
int misterio1(int (*fun) (int), int num) //Recibe un apuntador a función y un entero.
{
    return fun(num); //Aplica la función que se apunta al segundo parámetro y se devuelve el resultado.
}

/* Aplica la función de la que se tiene una referencia 
* (dado que se recibe un apuntador a la misma, que recibe un entero 
* y no devuelve nada) al segundo parámetro formal de la función, 
* que es un entero.
*/
void misterio2(void (*fun) (int), int num) //Recibe un apuntador a función y un entero.
{
    fun(num); //Aplica la función que se apunta al segundo parámetro; no se devuelve nada.
}

/* Función que calcula cuadrados.
* ----------
* Recibe un número entero, cuyo cuadrado es calculado
* y es el regreso de la función.
*/
int cuadrado_num(int num) //Dado que se regresa el cuadrado de un entero, la función regresa un entero.
{
    return num * num; //Para calcular el cuadrado del número, se le multiplica por sí mismo.
}

/*Función que imprime
* -------------------
* Recibe el valor que será escrito en la salida estándar.
*/
void imprime_num(int num)
{
    printf("Tada: %d\n", num); //Imprime 'Tada: ', seguido del valor como pasado como parámetro y un salto de línea.
}
