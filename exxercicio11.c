//Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida 
// é o número 1234. Deve ser impresso as seguintes mensagens: 
// ACESSO PERMITIDO caso a senha seja válida. 
// ACESSO NEGADO caso a senha seja inválida.


#include <stdio.h>

int main(void) {
  int senhaValida = 1234;
  int senha;
  scanf("%d", &senha);
  if (senha == senhaValida) printf( "ACESSO PERMITIDO");
  else printf( "ACESSO NEGADO");
}
