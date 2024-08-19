//Ler um valor numérico que esteja na faixa de valores de 1 até 9. O programa deve apresentar a 
//mensagem “O valor está na faixa permitida”, caso o valor informado esteja entre 1 e 9. Se o valor 
//estiver fora dessa faixa, o programa deve apresentar a mensagem “O valor está fora da faixa 
//permitida”.



#include <stdio.h>

int main(void) {
 int valor;
  scanf("%d", &valor);
  if ( valor >= 1 && valor <= 9) {
    printf("O valor está na faixa permitida");
  }
  else {
    printf("O valor está fora da faixa permitida");
  }
}
