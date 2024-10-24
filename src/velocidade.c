#include <stdio.h>
    int main(){
    // O tipo float é para trabalhar com casas decimais //
    float km_inicial, km_final, tempo_inicial, tempo_final, velocidade_media;
    // Perguntas ao usuário //
    printf("Digite seu km inicial:\n");
    scanf("%f",&km_inicial);
    printf("Digite seu km final:\n");
    scanf("%f",&km_final);
    printf("Digite seu tempo final:\n");
    scanf("%f",&tempo_inicial);
    printf("Digite seu tempo final:\n");
    scanf("%f",&tempo_final);
    // Conta //
    velocidade_media = (km_final - km_inicial) / (tempo_final - tempo_inicial);

    // Resultado //
    printf("Sua média de velocidade é: %.2f km/h\n", velocidade_media);

    return 0; 

    }