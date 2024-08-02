#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont, n, nlista, soma_p, soma_i;
    
    soma_p = 0;
    soma_i = 0;
    printf("Digite a quantidade de números da lista: ");
    scanf("%d", &n);

    for (cont=1; cont<=n; cont++)
    {

    
        printf("\nDigite um número inteiro: ");
        scanf("%d", &nlista);

        if (nlista % 2 == 0)
            soma_p = soma_p + nlista;
        else
            soma_i = soma_i + nlista;
    }
    printf("\nA soma dos números pares = %d\n", soma_p);
    printf("A soma dos números ímpares = %d\n", soma_i);

    return 0;
}