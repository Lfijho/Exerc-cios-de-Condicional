//Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu). 



#include <stdio.h>

int main(void) {
  int anoNascimento;
  int anoAtual = 2024;
  int idade;
  scanf("%d", &anoNascimento);
  idade = anoAtual - anoNascimento;
  if ( idade >= 16 ) printf("Você pode votar este ano.");
  else {
    printf("Você não pode votar este ano.");
  }
}
