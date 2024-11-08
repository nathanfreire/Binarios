#include <stdio.h>
#include "../lib/att.h"

int main(){
    int num1;
    int num2;

    printf("Digite um número e tecle enter:\n");
    scanf("%d",&num1);

    printf("Digite outro número e tecle enter:\n");
    scanf("%d",&num2);

    printf("O maior valor entre os dois é: %d\n",comparador(num1,num2));

    return 0;
}