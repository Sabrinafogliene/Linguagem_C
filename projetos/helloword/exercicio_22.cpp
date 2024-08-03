#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, maior, cont;

    maior = 0;
    cont = 1;
    while (cont<=15)
    {
        printf("Digite um número:\n");
        scanf("%d", &num);

        if (num > maior)
            maior = num;
        cont++;
    }
    printf("\nO maior número digitado foi %d\n", maior);
    return 0;
}