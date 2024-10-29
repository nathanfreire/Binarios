#include <stdio.h>
int main(){
    int mes;
    printf("Digite o número referente ao mês para saber sua estação e tecle enter\n");
    scanf("%d",&mes);

    if(mes ==1 || mes ==2 || mes ==12){
        printf("nesse mês a estação é o verão");
}

    else if (mes==3 || mes==4 || mes==5){
        printf("nesse mês a estação é o outono");
    }

    else if (mes==6 || mes==7 || mes==8){
        printf("nesse mês a estação é o inverno");
    }

    else if (mes==9 || mes==10 || mes==11){
        printf("nesse mês a estação é o primavera");
    }

    else{
        printf("mês inválido!");
    }

    printf("\n");

    return 0;
}