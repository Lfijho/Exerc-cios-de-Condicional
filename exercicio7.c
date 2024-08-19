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
