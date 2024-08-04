#include <stdio.h>

int main()
{
    float alunos[5], soma=0.0, media;
    int i;
    for (i=0; i<5; i++){
        printf("Digite a nota: ");
        scanf("%f", &alunos[i]);
        soma = soma + alunos[i];
    }
    media = soma/5;

    printf("Números maiores que média %.2f\n", media);

    for (i=0; i<5; i++){

        if (alunos[i] >= media)
        {
             printf("- %.2f - ", alunos[i]);
        }
    }
    return 0;
}