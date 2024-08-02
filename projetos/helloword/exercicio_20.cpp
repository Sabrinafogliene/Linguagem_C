#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um número: \n");
    scanf("%d", &num);

    while (num!=0)
    {
        printf("O número lido foi %d\n\n", num);
        printf("Digite um número: \n");
        scanf("%d", &num);
    }
    return 0;
}