#include <stdio.h>

int main(){

    int v;

    printf("Digite um valor entre 1 e 9: \n");
    scanf("%d", &v);

    if(v>1 && v<9){
        printf("O valor está na faixa permitida. \n");

    }else{
        printf("O valor está fora da faixa permitida. \n");
    }

}