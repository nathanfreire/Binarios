#include <stdio.h>
    int main(){
    // O tipo float é para trabalhar com casas decimais //
    float nota1, nota2, nota3, nota4, media;
    
    printf("Digite sua primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite sua segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digite sua terceira nota:\n");
    scanf("%f",&nota3);
    printf("Digite sua quarta nota:\n");
    scanf("%f",&nota4);

    media = (nota1 + nota2 + nota3 + nota4) /4;

    printf("Sua média é: %.2f\n", media);

    return 0; 
    }