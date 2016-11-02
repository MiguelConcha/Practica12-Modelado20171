#include <stdio.h> //Se incluye el archivo de cabecera que permita imprimir.
#include <stdlib.h> /*Se inluye el archivo de cabecera de la biblioteca estándar para usar srand()
					 que permite establecer una semilla para generar números pseudo-aleatorios.*/
#include <time.h> /*Se incluye este archivo de cabecera que incluye la biblioteca relacionada con operaciones 
					de fecha y hora que ervirá para poder generar los números pseudo-aleatorios a partir de 
					la fecha actual.*/

void bubble_sort(int *array, int length); //Especificando la función que ordena el arreglo dado que está por debajo del main.
void print_array(int *arr, int n); //Lo mismo se hace para la función encargada de imprimir los contenidos del arreglo.

int main() //Función principal que se encarga de la ejecución del programa.
{
	srand(time(NULL)); /*La llamada a "time(NULL)" regresa el tiempo de acuerdo con la fecha actual en segundos desde el primero de enero de 1970.
						Luego, este número se emplea como la 'semilla' para generar los números pseudo-aleatorios.*/
	int arreglo[500]; //Se crea un arreglo de tamaño 500.
	for(int i = 0; i < 500; ++i){ //Iteramos cada posición del arreglo que fue declarado
		arreglo[i] = rand() % 1000; /*y vamos llenando cada posición con un número pseudo-aleatorio (generado a partir de la semilla)
									que puede ir desde cero hasta RAND_MAX, que es aproximadamente 32767, pero varía de acuerdo 
									con la implementación de las bibliotecas. Se efectúa la operación de módulo para que a lo más 
									se tenga el número 1000.*/
	}
	int size = sizeof(arreglo)/sizeof(arreglo[0]); /*Para poder pasar como argumento a la función que se encarga de ordenar el arreglo su tamaño, 
													éste puede deducirse a partir del tamaño de la estructura en bytes, dividido por el tipo de
													dato en una posición del arreglo, por ejemplo la primera, pues los arreglos en C son homogéneos.
													Este número referido a la longitud de nuestro arreglo lo almacenamos en la variable de "size".*/
	printf("Arreglo desordenado:\n\n"); //Se muestra un mensaje para aclara que el arreglo aún no ha sido ordenado.
	print_array(arreglo, size); //Se pasa el arreglo y su longitud a la función que se encarga de imprimirlo para mostrarlo en la pantalla.
	printf("\n\nArreglo ordenado ascendentemente:\n\n"); //Se indica que lo que venga después ya será el arreglo propiamente ordenado en orden ascendente de sus elementos de tipo entero.
	bubble_sort(arreglo, size); //Se manda llamar a la función que lleva a cabo el algoritmo de ordenamiento BubbleSort de complejidad O(n^2) que lleva a cabo el ordenamiento del mismo.
	print_array(arreglo, size); //Y por último se imprime nuevamente el arreglo, pero en esta ocasión sus elementos ya estarán ordenados.
	return 0; //El estado de salida indica que todo salió correctamente.
}

/*
* Algoritmo de ordenamiento de complejidad O(n^2).
* ------------------------------------------------
* Recibe como parámetros un apuntador de tipo entero (un arreglo) y el largo 
* del arreglo, para saber cuántas posiciones de memoria contiguas se van a evaluar.
* El algoritmo de ordenamiento hace varios recorridos sobre el arreglo y checa si el elemento
* actual es menor o igual que el que le sigue, pues de lo contrario se tienen que intercambiar.
*/
void bubble_sort(int *array, int length)
{
	int j,k; //Se declaran estas variables antes del bucle de iteración para que haya más portabilidad del código y el compilador no se queje.
	for(j = 0; j < length -1; j++){ //Una primera variable se refiere a los índices del arreglo, desde el primero hasta el último.
		for( k = 0; k < length-j-1; k++){ /*La segunda varaible itera desde el primer índice hasta uno antes de la primera variable.
											Esto es debido a que una sutil optimización del algoritmo sugiera no tener que 
											iterar hasta el final del arreglo cada vez, pues se asegura que el elemento que ocupe el último lugar, 
											luego el penúltimo, etc., ya estará en la posición en la que va en la medida en que estas iteraciones 
											se vayan llevando a cabo.*/
			if(array[k+1] < array[k]){ //Se checa si el elemento precediendo a otro es mayor que el actual.
				int aux = array[k+1]; //En ese caso tienen que ser intercambiados para ordenar ascendentemente. Por tanto, se almacena temporalmente el valor del segundo elemento en una variable auxiliar para no perderlo.
  				array[k+1] = array[k]; //En la posición ahora vacía se almacena el valor de la primera posición.
  				array[k] = aux; //Y ahora en esta primera posición del arreglo se almacena el valor de la segunda, que había sido guardada temporalmente en la variable auxiliar.
			}
		}
	}
}

/*
* Imprime un arreglo.
* -------------------
* Recibe un apuntador de tipo entero, pues los arreglos en C son apuntadores
* a regiones contiguas en memoria; también se recibe el tamaño del arreglo para 
* saber hasta dónde iterar y luego parar la impresión de los elementos.
*/
void print_array(int *arr, int length)
{
	int i; //Se declara esta variable antes del bucle de iteración para que haya más portabilidad del código y el compilador no se queje.
	printf("["); //Se imprime este carácter para delimitar el inicio del arreglo.
	for(i = 0; i < length-1; i++) //Iteramos cada posición del arreglo.
    	printf("%d%s ", arr[i], ","); //Imprime cada elemento del arreglo almacenado en él a partir del índice actual correspondiente a la iteración, excepto por el último, y luego una coma.
  	printf("%d", arr[length-1]); //El último elemento es tratado de forma separada porque en este caso ya no se necesita imprimir una coma que lo prosiga.
  	printf("]\n"); //Se imprime este carácter para delimitar el final del arreglo.
}

