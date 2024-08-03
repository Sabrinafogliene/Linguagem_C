#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, suc, ant;

    do 
    {
        printf("Digite um número: \n");
        scanf("%d", &num);
        if (num != 0 && num != 9){
            
            if (num%2==0)
            {
                suc = num + 1;
                printf("Sucessor = %d\n", suc);
            }
            else 
            {
                ant = num - 1;
                printf("Antecessor = %d\n", ant);
            }
        }
    }
    while (num != 0 && num != 9);
    return 0;
}