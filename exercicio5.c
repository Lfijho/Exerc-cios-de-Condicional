//Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e 
//escrever a média semestral. Se a média for maior que 6.0 imprimir a mensagem “APROVADO”. Se 
//a média for menor que 6.0 e maior que 3.0, imprimir a mensagem “EXAME”, se a média for menor 
//que 3.0 imprimir a mensagem “REPROVADO”




#include <stdio.h>

int main(void) {
  double p1;
  double p2;
  double media;
  scanf("%lf", &p1);
  scanf("%lf", &p2);
  media = (p1 + p2) / 2;
  printf("Nota final: %lf\n", media);
  if ( media >= 6.0) {
    printf("APROVADO");
  }
    else if( media <6 && media > 3) {
      printf("EXAME");
    }
  else {
    printf("REPROVADO");
  }
}
