/* Esse programa obtem um número do usuario e diz se é par, exibindo uma mensagem em tela */
#include <stdio.h>
int main(){
    int n;
    printf("Digite um número e tecle Enter\n");
    scanf("%d",&n);

    if( n % 2 == 0){
        printf("O valor %d é Par\n",n);
    }

    else{
        printf("O número %d é Impar\n");
    }
    
    return 0;
}