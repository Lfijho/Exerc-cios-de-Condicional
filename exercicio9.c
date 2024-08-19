//As maçãs custam R$ 0,30 se forem compradas menos do que uma dúzia, e R$ 0,25 se forem 
//compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas, 
// calcule e escreva o valor total da compra.





#include <stdio.h>

int main(void) {
  int qtd;
  double valorFinal;
  scanf("%d", &qtd);
  if (qtd >= 12) {
    valorFinal = qtd * 0.25;
  printf("O valor final é: %.2lf", valorFinal);
  }

else {
  valorFinal = qtd* 0.30;
  printf("Você não alcançou a quantidade mínima para o desconto. O valor final é: %.2lf", valorFinal);
 }
}
