#include <stdio.h>

int main(){

    float n1, n2, n3, n4, md1, md2, ne;
     
    printf("Digite a nota n1: \n");
    scanf("%f", &n1);

    printf("Digite a nota n2: \n");
    scanf("%f", &n2);

    printf("Digite a nota n3: \n");
    scanf("%f", &n3);

    printf("Digite a nota n4: \n");
    scanf("%f", &n4);

    md1 = (n1+n2+n3+n4)/4;

    if(md1 >= 7){
        printf("Aprovado! \n");
        printf("Média do aluno: %.2f \n", md1);
     }else{
        printf("Reprovado! A média do aluno foi: %.2f \n", md1);
        printf("Digite a nota do exame de recuperação ne: \n");
        scanf("%f", &ne);

        md2 = (ne+md1)/2;
        
        if(md2 >= 5){
            printf("Aprovado em exame! \n");
            printf("A média do aluno foi: %.2f. \n", md2);
        }else{
            printf("Reprovado! \n");
            printf("A média do aluno foi: %.2f. \n", md2);
        }

        }
        
}
