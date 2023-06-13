#include <stdio.h>

int main(){

    int v, resultado;

    printf("Digite um valor qualquer: \n");
    scanf("%d", &v);

    resultado = v*2;

    if(resultado>30){

        printf("%d \n", resultado);
    }
}