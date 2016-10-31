#include <stdio.h> //Se incluye el archivo de cabecera stdandard input-output para llevar a cabo la escritura.

void swap(int *a, int *b); //A veces el programa es más claro con el main en la parte superior, pero en este caso tenemos que especificar las funciones antes del main (su firma). 
						
int main() //Contiene el flujo de la ejecución del programa.
{
  int a = 2, b = 3; //Asignación múltiple en una sola línea.
  /*En este caso sí se emplearon las eqtiquetas incrustadas de formato
  que sirven para que sean sustituidas luego por los argumentos que vienen después
  y son del tipo especificado por la etiqueta.*/
  printf("%s\n\n%s\n", "Función Swap:", "Valores iniciales:"); //Mostrando un mensaje para saber lo que hace el programa.
  printf("%s%d\n%s%d\n", "a = ", a, "b = " , b); //Se muestran cuáles con los valores originales de las dos variables enteras.
  swap(&a, &b); /*Para obtener la dirección de una variable y no 
  				propiamente el valor que tiene asocidado, se emplea el operador 
  				"&" (apuntador de dirección). Dado que la función swap recibe apuntadores,
  				debemos obtener la dirección en memoria de las dos variables.*/
  printf("%s\n%s%d\n%s%d\n", "Luego del intercambio:", "a = ", a, "b = ", b); //Mostrando cómo cambiaron los valores de las dos variables al imprimirlas.
  return 0; //El estado de salida devuelto denota que no hubo complicaciones.
}

void swap(int *a, int *b) //La función swap recibe dos apuntadores a enteros, esto es, su dirección en memoria.
{
  int aux = *a;	//Aux toma el valor almacenado en "a".
  *a = *b; //El valor almacenado en "a" ahora es intercambiado por el valor almacenado en "b".
  *b = aux; //Y luego el valor almacenado en "b" se ve intercambiado or el que había tomado inicialmente la variable auxiliar.
}
