#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int cont=1;
    media = 0;

    while(cont<=2)
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
            printf("Aluno Aprovado com média %.2f\n", media);
        }
        else
        {
            printf("Aluno Reprovado com média %.2f\n", media);
        }
        cont++;
    }

    return 0;
}