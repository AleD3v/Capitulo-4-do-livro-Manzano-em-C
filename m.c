#include <stdio.h>
#include <string.h>
int main(){

    char sexo;
    char nome;

    printf("Digite o seu nome: \n");
    scanf("%s", &nome);

    printf("Digite seu sexo (m ou f): \n");
    scanf("%c", &sexo);

    if(sexo == 'm'){

        printf("Ilmo. Sr. %s", &nome);
    }else{
        if( sexo == 'f'){
            printf("Ilma. Sra. %s", &nome);
        }else{
            printf("Sexo informado inválido");
        }
    }
}