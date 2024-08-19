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
