#include <stdio.h>

int main (){

    int a, b, c, d;

    printf("Digite um valor para a: \n");
    scanf("%d", &a);

    printf("Digite um valor para b: \n");
    scanf("%d", &b);

    printf("Digite um valor para c: \n");
    scanf("%d", &c);

    printf("Digite um valor para d: \n");
    scanf("%d", &d);

    printf("\n");
    printf("OS números divisiveis por 2 e por 3 são: \n");

    if(a%2 == 0 && a%3 == 0){

        printf("%d \n", a);
    }
    if(b%2 == 0 && b%3 == 0){

        printf("%d \n", b);
    }
    if(c%2 == 0 && c%3 == 0){

        printf("%d \n", c);
    }
    if(d%2 == 0 && d%3 == 0){

        printf("%d \n", d);
    }
}