#include <stdio.h>

int main(){

    float n1, n2, n3, n4, md;
     
    printf("Digite a nota n1: \n");
    scanf("%f", &n1);

    printf("Digite a nota n2: \n");
    scanf("%f", &n2);

    printf("Digite a nota n3: \n");
    scanf("%f", &n3);

    printf("Digite a nota n4: \n");
    scanf("%f", &n4);

    md = (n1+n2+n3+n4)/4;

    if(md >= 5){
        printf("Aprovado \n");
        printf("Média do aluno: %.2f \n", md);
     }else{
        printf("Reprovado \n");
        printf("Média do aluno: %.2f \n", md);
        }
        
}
