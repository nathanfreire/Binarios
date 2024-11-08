#include <stdio.h>

int comparador (int num1, int num2){
    int m;
    if (num1 > num2){
        m = num1;
    }
    else{
        m = num2;
    }
    return m;
}

char genero(char letra){
    if(letra == 'M'){
        printf("Masculino");
    }
    else if(letra == 'f'){
        printf("Feminino");
    }
    else{
        printf("tu é burro, so tem dois gêneros");
    }
}

void vogal(char letra){
    if(letra == 'a'){
        printf("A é vogal");
    }
    else if(letra == 'e'){
        printf("E é vogal");
    }
    else if(letra == 'i'){
        printf("I é vogal");
    }
    else if(letra == 'o'){
        printf("O é vogal");
    }
    else if(letra == 'u'){
        printf("U é vogal");
    }
    else{
        printf("%c é consoante",letra);
    }
}

void vogal(char letra){
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("A letra digitada é uma vogal");       
    }
    else{
        printf("A letra digitada é consoante");
    }
}