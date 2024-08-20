//. Faça um programa que leia idade e peso de um atleta e imprima a sua categoria, de acordo com a seguinte tabela:
// Idade Peso Categoria
// até 12 anos - Infantil
// 13 a 16 anos até 40 kg Juvenil leve || acima de 40 kg Juvenil pesado
// 17 a 24 anos até 45 kg Senior leve || de 45,001 a 60 kg Senior médio || acima de 60 kg Senior pesado
// acima de 24 anos - Veterano




#include <stdio.h>

int main(void) {
  int idade;
  double peso;
  scanf("%d", &idade);
  scanf("%lf", & peso);
  if ( idade <=12 ) {
    printf("Infantil");
  }
  else if ( idade >= 13 && idade <=16 && peso <=40) printf("Juvenil leve");
  else if (idade >= 13 && idade <=16 && peso > 40) printf("Juvenil pesado");
  else if (idade >= 17 && idade <=24 && peso <= 45) printf("Senior leve");
  else if (idade >= 17 && idade <=24 && peso > 45 && peso <= 60) printf("Senior médio");
  else if (idade >= 17 && idade <=24 && peso > 60) printf("Senior pesado");
  else printf("Veterano");
    

}
