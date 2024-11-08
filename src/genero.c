#include <stdio.h>
#include "../lib/att.h"

int main(){
  char letra;
     printf("Digite a primeira letra do seu gênero(F ou M):\n");
  scanf("%c",&letra);
  genero(letra);

    return 0;
}
