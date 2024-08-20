//Faça um programa que recebe o preço do ingresso do cinema e a partir da categoria do cliente 
//determina o preço final com desconto para entradas de cinema. Estudantes recebem 50% de desconto, 
//aposentados, 30%. Os demais clientes pagam o ingresso completo.
//Categorias: Estudante: E ou e
//Aposentados: A ou a
//Normal: N ou 



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(void) {
  char tipo;
  double valorIngresso;
  scanf("%c", &tipo);
  scanf("%lf", &valorIngresso); 
  tipo = toupper(tipo); 
  switch(tipo) {
    case 'E': valorIngresso = valorIngresso / 2;
    break;
    case 'A': valorIngresso = valorIngresso - (valorIngresso*0.3) ;
    break;
  }
  printf("Preço final do ingresso com os devidos descontos incluídos: %.2lf\n", valorIngresso);

}
