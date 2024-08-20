//Fazer um algoritmo para ler 3 números quaisquer e imprimir o maior deles. Se iguais, imprimir qualquer um.

#include <stdio.h>

int main(void) {
 int num1;
  int num2;
 int num3;
  int maior;
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  if(num1>num2 && num1>num3) {
    maior = num1;
     printf("%d\n", maior);
  }
  else if ( num1 == num2 && num1 == num3) {
    printf("%d\n", num1);
  }
  else if(num2>num1 && num2>num3) {
    maior = num2;
    printf("%d\n", maior);
  }
  else {
    maior = num3;
    printf("%d\n", maior); 
  }
  
}
