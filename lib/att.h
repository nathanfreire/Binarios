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
    if(letra == 'm' || letra == 'M'){
        printf("Masculino\n");
    }
    else if(letra == 'f' || letra == 'F'){
        printf("Feminino\n");
    }
    else{
        printf("tu é burro, so tem dois gêneros\nll");
    }
}

// void vogal(char letra){
  //  if(letra == 'a'){
 //      printf("A é vogal");
 //   }
  //  else if(letra == 'e'){
 //       printf("E é vogal");
  //  }
//else if(letra == 'i'){
 //       printf("I é vogal");
  //  }
  //  else if(letra == 'o'){
  //      printf("O é vogal");
  //  }
  //  else if(letra == 'u'){
  //      printf("U é vogal");
  //  }
  // else{
   //     printf("%c é consoante",letra);
   // }
//}

//void vogal(char letra){
  // if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
  //      printf("A letra digitada é uma vogal");       
  //  }
   // else{
  //     printf("A letra digitada é consoante");
 //   }
//}

void reajuste(float salario){

    float valor_aumento;
    float novo_salario;
    if(salario <= 280){
        valor_aumento = salario * (20.0 / 100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi reajustado em 20%. O valor de aumento é %f\n",salario,valor_aumento,novo_salario);
    }
    //else if(salario > 280 && salario <= 700)
    else if(salario <= 700){
        valor_aumento = salario * (15.0 / 100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi reajustado em 15%. O valor de aumento é %f\n",salario,valor_aumento,novo_salario);
    }
    else if(salario <= 1500){
        valor_aumento = salario * (10.0/ 100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi reajustado em 10%. O valor de aumento é %f\n",salario,valor_aumento,novo_salario);
}
    else{
        valor_aumento = salario * (5.0 / 100);
        novo_salario = salario + valor_aumento;
        printf("O salário antigo é %f e foi reajustado em 5%. O valor de aumento é %f\n",salario,valor_aumento,novo_salario);
    }
}