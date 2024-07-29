#include <stdio.h>

int main() {
    int a; 
    scanf("%d", &a);

    if (a < 0) {
        printf("\nNegativo");
        if (a % 2 == 0) 
            printf ("Par\n");
        else 
            printf("Ímpar\n");
    } else {
        printf("\nPositivo ");
        if (a % 2 == 0) 
            printf("Par\n");
        else 
            printf("Impar\n");
    }
    
    return 0;
}