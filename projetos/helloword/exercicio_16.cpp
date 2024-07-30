#include <stdio.h>
#include <stdlib.h>

int main (){
    int cont;
    float salario, soma, media, maior;
    soma = 0;
    media = 0;
    maior = 0;

    for (cont = 1; cont <= 10; cont++) 
    {
        printf("Digite o salário do funcionário: \n");
        scanf("%f", &salario);
        soma = soma + salario;
        if (salario > maior) {
            maior = salario;
        }
    }
    media = soma / 10;
    printf("O maior salário da empresa é %.2f\n", maior);
    printf("A média salarial da empresa é %.2f\n", media);
    return 0;
}