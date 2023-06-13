#include <stdio.h>

int main(){

    int a,b,s;

    printf("Digite um valor para a: \n");
    scanf("%d", &a);

    printf("Digite um valor para b: \n");
    scanf("%d", &b);

    if(a>b){
        s = a-b;
        printf("%d \n", s);
    } else{
        s = b-a;
        printf("%d \n", s);
    }




}