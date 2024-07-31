#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont;
    float nota1, nota2, nota3, media;
    media = 0;
    for (cont = 1; cont <= 40; cont + 1){
        printf("Primeira nota do aluno: \n");
        scanf("%f", &nota1);
        printf("Segunda nota do aluno: \n");
        scanf("%f", &nota2);
        printf("Terceira nota do aluno: \n");
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3;
        if (media >= 7)
        {
            printf("Aluno aprovado com a média %.2f\n", media);
        } else {
            printf("Aluno reprovado com a média %.2f\n", media);
        }
    


    }
    return 0;
}