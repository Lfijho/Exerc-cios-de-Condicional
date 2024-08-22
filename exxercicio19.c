//O programa recebe um caracter e imprime por extenso o estado civil.
// C – Casado(a)
// S- Solteiro(a)
// D – Divorciado(a)
// V- Viúvo(a)






#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> /
int main(void) {
  char estadoCivil;
  scanf("%c", &estadoCivil);
  estadoCivil = toupper(estadoCivil); /
  switch(estadoCivil) {
    case 'S': printf("SOLTEIRO");
    break;
    case 'C': printf("CASADO");
    break;
    case 'D': printf("DIVORCIADO");
    break;
    case 'V': printf("VIÚVO");
    break;
  }
  
}
