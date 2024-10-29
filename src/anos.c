#include <stdio.h>
int main(){
    int a;

     printf("Digite o ano e tecle Enter\n");
    scanf("%d",&a);

    if( a % 4 == 0){
        printf("O ano %d é bissexto\n",a);
    }

    else{
        printf("O ano %d não é bissexto\n");
    }
    
    return 0;

}