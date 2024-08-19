#include <stdio.h>

int main(void) {
 int num1;
  int num2;
  int maior;
  scanf("%d",&num1);
  scanf("%d",&num2);
  maior = num1;
  if(num2>maior){
    maior = num2;
  }
  printf("O maior é %d\n", maior);
}
