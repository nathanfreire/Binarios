#include <stdio.h>
int main(){
    // O tipo float é para trabalhar com casas decimais //
    float n1, n2,soma, divisao;
    printf("Digite um número e tecle Enter:\n");
    scanf("%f",&n1);
    printf("Digite outro número e tecle Enter:\n");
    scanf("%f",&n2);

    soma = n1 + n2;
    divisao = n1 / n2;

    printf("O resultado da soma é %.2f\n",soma);
    printf("O resultado da divisão é %.2f\n",divisao);
    return 0; 

}