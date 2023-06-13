#include <stdio.h>

int main(){

    int v;

    printf("Digite um valor para verificar: \n");
    scanf("%d", &v);

    if(v%2 == 0){

        printf("%d é par. \n", v);
    }else{

        printf("%d é ímpar. \n", v);
    }

}