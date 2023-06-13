#include <stdio.h>

int main(){

    int v;

    printf("Digite um valor: \n");
    scanf("%d", &v);

    if(!(v>3)){
        printf("%d \n", v);
    }else{
        printf("O valor é maior que 3 \n");
    }
}