#include <stdio.h>

int main()
{
    float prova1[5], prova2[5], prova3[5];
    float soma1 = 0, soma2 = 0, soma3 = 0; 
    float mediaprova1, mediaprova2, mediaprova3;
    float mediaaluno, somaturma = 0, mediaturma;
    int pos;
    
    for(pos=0;pos<5;pos++)
    {
        printf("Digite a nota da prova 1 do aluno %d: ", pos + 1);
        scanf("%f", &prova1[pos]);
        printf("Digite a nota da prova 2 do aluno %d: ", pos + 1);
        scanf("%f", &prova2[pos]);
        printf("Digite a nota da prova 3 do aluno %d: ", pos + 1);
        scanf("%f", &prova3[pos]);

    }
    
    for(pos=0;pos<5;pos++)
    {    
        soma1 += prova1[pos];
        soma2 += prova2[pos];
        soma3 += prova3[pos];
    }
    mediaprova1=soma1/5;
    mediaprova2=soma2/5;
    mediaprova3=soma3/5;

    printf("\nA média da prova 1 é: %.2f\n", mediaprova1);
    printf("A média da prova 2 é: %.2f\n", mediaprova2);
    printf("A média da prova 3 é: %.2f\n\n", mediaprova3);
        
    for(pos=0;pos<5;pos++)
    {
        mediaaluno = (prova1[pos] + prova2[pos] + prova3[pos])/3;
        somaturma += mediaaluno;
        printf("A média do aluno %d é: %.2f\n", pos + 1, mediaaluno);
    }
    mediaturma = somaturma/5;

    printf("\nA média da turma é: %.2f\n", mediaturma);
    
    return 0;
}