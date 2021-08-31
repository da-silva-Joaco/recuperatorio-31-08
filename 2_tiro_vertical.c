/**
 * Escribir un programa que acepte tres argumentos de tipo double:
 * y0, v0 y t. Imprimir el resultado de y0 + v0t - 1/2gt^2.
 * O sea la ecuación de desplazamiento para un tiro vertical
 * después de t segundos, con posición inicial y0 y velocidad inicial v0.
 *
 */


#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  double y = atof(argv[1]);
  double v = atof(argv[2]);
  double t = atof(argv[3]);
  double g = 9.8;
  double valorint = 0.5 * g*(t*t);
  double tiro = y+v*t - valorint;
  printf("%.2f\n",tiro);
  return 0;
}
