#include <stdio.h> //Se incluye el archivo de cabecera stdandard input-output para llevar a cabo la escritura.

int main() //Declarando el main del programa, mismo que siempre debe estar porque contiene las intrucciones de la ejecución del mismo.
{
	/**
	* "sizeof" es una función que genera el tamaño en bytes de variables y tipos de datos en C. 
	* Su valor de regreso es de tipo size_t. Por tanto, se puede usar la etiqueta %zu para especificar la conversión
	* en lugar de simplemente %d que puede llegar a mostrar advertencias del compilador. Sin embargo, esto es para los compiladores
	* que soportan C99, por lo que si se busca portabilidad, la mejor manera de imprimir este tipo de datos es conviertiéndolos 
	* a un unsigned long y usando entonces la etiqueta %lu.
	*/
	printf("El tipo short tiene tamaño %lu bytes\n", sizeof(short)); //Mostrando el tamaño en bytes del tipo short (-32767 a +32767).
	printf("El tipo int tiene tamaño %lu bytes\n", sizeof(int)); //Mostrando el tamaño en bytes del tipo int (–2,147,483,648 a 2,147,483,647).
	printf("El tipo unsigned int tiene tamaño %lu bytes\n", sizeof(unsigned int));//Mostrando el tamaño en bytes del tipo unsigned int (0 a 4,294,967,295).
	printf("El tipo int* tiene tamaño %lu bytes\n", sizeof(int *));//Mostrando el tamaño en bytes del tipo apuntador de entero (apuntan a la localización en memoria de una variable de tipo entero).
	printf("El tipo char tiene tamaño %lu bytes\n", sizeof(char));//Mostrando el tamaño en bytes del tipo char (–128 a 127); para carácteres.
	printf("El tipo float tiene tamaño %lu bytes\n", sizeof(float));//Mostrando el tamaño en bytes del tipo float (3.4E +/- 38 (7 dígitos de punto flotante)).
	printf("El tipo double tiene tamaño %lu bytes\n", sizeof(double));//Mostrando el tamaño en bytes del tipo double (1.7E +/- 308 (15 dígitos de punto flotante)).
	return 0; //Se devuelve explícitamente el estado de salida satisfactorio.
}