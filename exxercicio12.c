//Tendo como entrada a altura (h) e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de 
// uma pessoa, construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes 
// fórmulas: para homens: (72.7 * h) - 58 || para mulheres: (62.1* h) - 44.7



#include <stdio.h>

int main(void) {
 double altura;
  int sexo;
  double pesoIdeal;
  scanf("%lf", &altura);
  scanf("%d", &sexo);
  if(sexo == 2) pesoIdeal = (72.7 * altura) - 58; 
  else pesoIdeal = (62.1 * altura) - 44.7;
  printf("%.2lf\n", pesoIdeal);
}
