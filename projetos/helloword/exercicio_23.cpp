#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int cont;
    media = 0;

    for(cont=1; cont<=5; cont++)
    {
        printf("Digite a primeira nota do aluno: \n");
        scanf("%f",&nota1);
        printf("Digite a segunda nota do aluno: \n");
        scanf("%f", &nota2);
        printf("Digite a terceira nota do aluno: \n");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7)
        {
            printf("Aluno Aprovado!\n");
        }
        else
        {
            printf("Aluno Reprovado!\n");
        }
    }

    return 0;
}