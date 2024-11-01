#include <stdio.h>

int main(){
    int n[] = {13,8,23,95,47,14,10,45,165};
    int p = 0;
    int rs;

    while (p <= 8){
        rs = n[p]+n[p];
        printf("%d + %d = %d\n",n[p],n[p],rs);
        
        p++;
    }

    return 0;

}