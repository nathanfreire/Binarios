#include <stdio.h>

int main(){
    int i;
    int total = 0;
    for (i = 1930 ; i <= 2024 ; i++){
        if(i % 4 == 0){
            printf("os anos bissextos são: %d\n ",i);
            total ++;  
                
    }

    }
    printf("Total é: %d\n",total);
    return 0;
}