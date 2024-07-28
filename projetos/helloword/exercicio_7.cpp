#include <stdio.h>

int main(){
    int opcao;

    printf("Entre com um número inteiro:\n");
    scanf("%d",&opcao);
    
    switch (opcao) {
        case 1: {
            printf("\nNúmero 1\n");
            break;
        }

        case 2: {
            printf("\nNúmero 2\n");
            break;
        }

        default: printf("\nDefault.\n");
    }
    printf("Final do programa");
}