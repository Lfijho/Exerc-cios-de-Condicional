//Acrescente ao exercício acima a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média calculada seja menor que 6,0.





#include <stdio.h>

int main(void) {
  double p1;
  double p2;
  double media;
  scanf("%lf", &p1);
  scanf("%lf", &p2);
  media = (p1 + p2) / 2;
  if ( media >= 6.0) {
    printf("PARABÉNS! Você foi aprovado");
  }
  else {
    printf("Você foi REPROVADO! Estude mais");
  }
}
