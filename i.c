#include <stdio.h>

int main (){

    int a, b, c, d, e;

    printf("Digite um valor para a: \n");
    scanf("%d", &a);

    printf("Digite um valor para b: \n");
    scanf("%d", &b);

    printf("Digite um valor para c: \n");
    scanf("%d", &c);

    printf("Digite um valor para d: \n");
    scanf("%d", &d);

    printf("Digite um valor para e: \n");
    scanf("%d", &e);

    if(a<b && a<c && a<d && a<d){

        printf("O menor valor é: %d \n", a);

    }else{
        if(b<a && b<c && b<d && b<e){

            printf("O menor valor é: %d \n", b);
        }else{
            if(c<a && c<b && c<d && c<e){

                printf("O menor valor é: %d \n", c);
            }else{
                if(d<a && d<b && d<c && d<e){

                    printf("O menor valor é: %d \n", d);
                }else{
                    if(e<a && e<b && e<c && e<d){
                        printf("O menor valor é: %d \n", e);
                    }
                }
            }
        }
    }
    if(a>b && a>c && a>d && a>d){

        printf("O maior valor é: %d \n", a);

    }else{
        if(b>a && b>c && b>d && b>e){

            printf("O maior valor é: %d \n", b);
        }else{
            if(c>a && c>b && c>d && c>e){

                printf("O menor valor é: %d \n", c);
            }else{
                if(d>a && d>b && d>c && d>e){

                    printf("O maior valor é: %d \n", d);
                }else{
                    if(e>a && e>b && e>c && e>d){
                        printf("O menor valor é: %d \n", e);
                    }
                }
            }
        }
    }
}