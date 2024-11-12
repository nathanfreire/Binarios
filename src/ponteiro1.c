#include <stdio.h>

int main(){

    // declaração da variavel idade
    int idade = 18;
    // declaração de variável de ponteiro
    int *p_idade = &idade;
    printf("A idade é %d e está em %p e %p com o valor %d\n",idade,&idade,p_idade,*p_idade);

    return 0;
}