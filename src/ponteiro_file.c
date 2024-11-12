#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("files/texto.txt","a");
    // w -> Write(escrever)
    // r -> Read(ler)
    // a -> Append(adicionar)
    fprintf(arquivo,"segundo texte\n");
    fclose(arquivo);
    printf("Criamos o arquio\n");
    return 0;
}