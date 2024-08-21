//Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
  scanf( "%d", &num);
    if ( num < 0 ) printf("É negativo!");
    else printf("É positivo!");

}
