/**
 * Escribir un programa que acepte tres argumentos enteros
 * e imprima "iguales" si los tres números son iguales o
 * "no iguales" de lo contrario.
 *
 */


 #include <stdio.h>
#include <stdlib.h>

 int main(int argc, char const *argv[]) {
   int num1 = atoi(argv[1]);
   int num2 = atoi(argv[2]);
   int num3 = atoi(argv[3]);
   if (num1==num2 && num2==num3){
     printf("iguales\n");
   }else {
     printf("no iguales\n");
   }
   return 0;
 }
