#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, cont;

    maior = 0;
    for (cont=1; cont<=15; cont++)
    {
        printf("Digite um número:\n");
        scanf("%d", &num);

        if (num > maior)
            maior = num;
    }
    printf("\nO maior número digitado foi %d\n", maior);
    return 0;
}