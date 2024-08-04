#include <stdio.h>

int main(){
    const int tamvet=5;
    int vet1[tamvet], vet2[tamvet], i;
    for (i=0; i<tamvet; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &vet1[i]);
        if (vet1[i]%2==0)
        {
            vet2[i]=vet1[i]+1;
        } else
        {
            vet2[i]=vet1[i]-1;
        }
    }
    printf("Elementos de VET 1 e VET 2:\n");
    for (i=0;i<tamvet;i++)
    {
        printf("VET 1 = ");
        printf("%d\n", vet1[i]);
        printf("VET 2 = ");
        printf("%d\n", vet2[i]);
    }
    return 0;
}