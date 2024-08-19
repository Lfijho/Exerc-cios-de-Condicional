//Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los em ordem crescente.





#include <stdio.h>

int main(void) {
 int num1;
  int num2;
  int maior;
  int menor;
  scanf("%d",&num1);
  scanf("%d",&num2);
  maior = num1;
  menor = num2;
  if(num2>maior){
    maior = num2;
    menor = num1;
  }
  printf("%d ", menor);
  printf("%d ", maior);
}
