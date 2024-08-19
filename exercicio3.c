//Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e 
//escrever a média semestral e a seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente se 
//o aluno foi aprovado (considere 6.0 a nota mínima para aprovação).




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
}
