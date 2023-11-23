#include <stdbool.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))

int suma(int a, int b) { return a + b; }

void imprimir() {
  printf("Hola como estas soy Carlos Gil Andrade, el mejor??...");
}

void recorrer() {
  printf("\n");
  for (int i = 0; i < 40; i++) {
    printf("El numero es: %d\n", i);
  }
}

bool esPrimo = false;

void numerosPrimos() {

  int contador, i, num;
  printf("Ingrese un numero para saber si es primo: ");
  scanf("%d", &num);

  for (i = 0; i < num; i++) {
    if (num % i == 0) {
      contador++;
    } else if (contador == 2) {
      esPrimo = true;
      printf("El numero %d: es primo:", num);
    } else {
      printf("El numero %d: no es primo:", num);
    }
  }
}