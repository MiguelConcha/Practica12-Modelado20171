/****************************************************************************************************************************
*
* DIRECTIVAS DEL PREPROCESADOR:
*
* En el lenguaje de programación C, '#' se refiere
* a las directivas del preprocesador. Esto significa que le indica al 
* preprocesador (que es una parte del compilador que efectúa tranformaciones del código previa a la compilación per se),
* que debe insertar los contenidos de otro archivo en el código fuente en el punto
* en el que la directiva sea encontrada. Típicamente se usan para incluir archuvos de cabecera
* (terminan en .h y contienen --normalmente-- declaración de clasesm variables, subrutinas y funciones, etc.), que están fuera 
* del código fuente. Estos archivos de cabecera ya han sido procesados y no hay posibilidad de que tengan errores.
* También cabe mencionar que '#' es el símbolo que emplea C para definir macros, entonces, 
* siempre que el símbolo se usa, es reemplazado por los contenidos del macro, i.e., un fragmento de código 
* al que se le ha dado un nombre. Por último, cuando se usan "<>", el preprocesador busca en una ruta de directorio
* predeterminada al archivo de cabecera; por otro lado, si se usan comillas dobles (""), el peprocesador solamente buscará
* el archivo de cabecera en el mismo directorio en el que se encuentra localizado el código fuente.
*
*****************************************************************************************************************************/
#include <stdio.h> //Se incluye el archivo de cabecera "standard input-output header" que contiene operaciones de entrada y salida estándar para poder, por ejemplo, leer del teclado o imprimir la pantalla.


/**
* A diferencia de otros lenguajes, como es el caso de Python, en C sí es necesaria una declaración de un main.
* Éste funciona como el núcleo de nuestros programas, en donde se incluyen las intrucciones que llevan a cabo la 
* ejecución del mismo. Puede o no recibir parámetros, pero la ventaja de recibir estos dos parámetros 
* es que le aporta la flexibilidad de poder recibir argumentos en la línea de comandos, e.g., "cat" (recibe un archivo
* y redirecciona la salida a la salida estándar). El arcg se refiere al "argument count", que es el número de argumentos recibidos
* y el segundo parámetros es el "argument vector", mismo que es un apuntador a un arreglo de carácteres que contiene 
* los argumentos que son pasados en la línea comandos. EL último elemento del vector es un apuntador nulo ("null-pointer").
*/
int main(int argc, char const *argv[])
{
	printf("¡Hola, mundo!\n"); //La función "printf" manda salida con formato a la salida estándar. Puede llevar etiquetas de formato incrustadas que son luego reemplazadas por los valores especificados subsecuentemente como argumentos adicionales.
	return 0; //El valor de regreso del main es un entero, mismo que es tratado como el estado de salida y le dice si la ejecución del programa fue correcta o no.
}	//El valor de 0 indica que todo salió bien y si no se escribe explícitamente, se regresa de forma implícita. EL valor de 1, por otro lado, indica que hubo inconvenientes en la ejecución.