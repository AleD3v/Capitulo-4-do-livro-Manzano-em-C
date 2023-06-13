#include <stdio.h>

int main(){

    int a, b, c, s;

    printf("Digite um valor para a: \n");
    scanf("%d", &a);

    printf("Digite um valor para b: \n");
    scanf("%d", &b);

    printf("Digite um valor para c: \n");
    scanf("%d", &c);

    s = a+b+c;

    if(s>=100){

        printf("O resultado da soma dos 3 valores é: %d \n", s);
    }



}