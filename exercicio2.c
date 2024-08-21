//Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo e apresentar o valor 
//lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser 
//multiplicado por -1.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    scanf("%d", &num);
    if (num <= 0 ) num = num * -1;
    printf("%d\n", num);
}
