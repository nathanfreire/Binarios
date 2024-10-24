#include <stdio.h>
    int main(){
    // O tipo float é para trabalhar com casas decimais //
    // vale trasporte = 0.06, inss = 0.07, fgts =0.08
    float salario_bruto, salario_liquido, vale_trasporte, inss, fgts, desconto, multiplicação;
    // Pergunta ao usuario //
    printf("Digite seu salário bruto:\n");
    scanf("%f",&salario_bruto);
    // contas para o desconto //
    vale_trasporte = (6.0 / 100) * salario_bruto;
    inss = (7.0 / 100) * salario_bruto;
    fgts = (8.0 / 100) * salario_bruto;
    desconto = vale_trasporte + inss + fgts;
    salario_liquido = salario_bruto - desconto;
    // Resultados //
    printf("O total de descontos é:%.3f\n Seu salário líquido é %.3f\n", desconto, salario_liquido);

    return 0; 
    }