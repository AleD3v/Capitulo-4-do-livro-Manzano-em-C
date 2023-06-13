#include <stdio.h>

int main(){

    int a, b, c;

    printf("Digite um valor para a: \n");
    scanf("%d", &a);

    printf("Digite um valor para b: \n");
    scanf("%d", &b);

    printf("Digite um valor para c: \n");
    scanf("%d", &c);

    if(a<b){

        if(b<c){
            printf("%d, %d, %d \n", a, b, c);
        }else{
            if(a<c){
                printf("%d, %d, %d \n", a, c, b);
            }else{
                printf("%d, %d, %d \n", c, a, b);
            }
        }
    }else{
        if(a<c){
            printf("%d, %d, %d \n", b, a, c);
        }else{
            if(c<b){
                printf("%d, %d, %d \n", c, b, a);
            }else{
                printf("%d, %d, %d \n", b, c, a);
            }
        }
    }
}