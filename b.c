#include <stdio.h>

int main(){

    int n;

    printf("Digite um valor para n: \n");
    scanf("%d", &n);

    if(n>0){

        printf("%d \n",n);
    }else{

        n = n*(-1);
        printf("%d \n",n);
    }



}