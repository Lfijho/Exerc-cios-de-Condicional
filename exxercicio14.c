//Faça um algoritmo para ler dois números e imprimir o maior e o menor número lido, acompanhados 
// da mensagem Menor ou Maior, conforme o caso. Se iguais, imprimir os dois números 
// acompanhados da mensagem São iguais.

#include <stdio.h>

int main(void) {
 int num1;
  int num2;
   int maior;
    int menor;
      scanf("%d", &num1);
      scanf("%d", &num2);
  maior = num1;
  menor = num2;
  if ( maior == menor ) {
    printf("São iguais");
  }
  else if ( menor > maior) {
    menor = num1;
    maior = num2;
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
  }
  else {
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
  }
       
 
}
