
/*  Universidad de la Frontera
    IIE-344 Estructura de Datos y Algoritmos
    Tarea 2
    Autor 1: Cristian Duran
    Autor 2: Mauricio Arismendi
    Fecha: 26 de Septiembre de 2021
    */
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "perroStruct.h"
#include "funciones.h"

int main(){

int opcion = 0;
while(1){

  printf("===========================\n");
  printf(" \t**Bienvenido **\n");
  printf("------------------------------\n");
  printf("¿Que deseas hacer?\n");

  printf("1: Agregar Perros\n2: Ver perros\n3: Cruzar\n");

  scanf("%i", &opcion);

switch(opcion){

  case 1:
    ingresarPerro1();
    ingresarPerro2();
    break;

  case 2:
    //verPerros(perro);
    break;

  case 3:
    void cruzarPerros(struct Perro1* p1, struct Perro2* p2);
    break;

  default:
    printf("\n opcion no valida, intentelo nuevamente\n");
    break;

    }

}
  return 0;

}
