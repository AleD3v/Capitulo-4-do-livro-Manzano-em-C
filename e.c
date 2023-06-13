#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, d, x1, x2;

    printf("Digite um valor para a: \n");
    scanf("%lf", &a);

    printf("Digite um valor para b: \n");
    scanf("%lf", &b);

    printf("Digite um valor para c: \n");
    scanf("%lf", &c);

    if(a==0){

        printf("A equação não é do segundo grau. Digite um valor para a diferente \n");
    }else{

        d = pow(b,2) - (4*a*c);

        if(d==0){
            x1 = -b/(2*a);
            printf("O resultado de x1 e x2 é: %.0lf \n", x1);
        }else{

            if(d>0){

                x1 = (-b + pow(d,(1/2)))/(2*a);
                x2 = (-b - pow(d,(1/2)))/(2*a);
                printf("x1 = %.2lf \n", x1);
                printf("x2 = %.2lf \n", x2);
            }else{

                printf("Não existe solução real. \n");
            }

        }
    }

}