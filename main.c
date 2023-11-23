#include "funciones.c"
#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

  printf("La suma es: %d", suma(240, 20));
  printf("\n");
  imprimir();
  recorrer();

  numerosPrimos();
  printf("Hola como estas? haciendo pruebas de Low Level Pogramming para "
         "electronica y sistemas operativos, kernels, emsamblador, CPU, "
         "robotica y todo de bajo nivel, para estar lo mas cercano al "
         "hardware......");
  return 0;
}
