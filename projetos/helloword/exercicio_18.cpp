#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont;
    float porcen, salario, reajustado, maior;
    maior = 0;
    
    printf("Digite o porcentual de reajuste dos salários: ");
    scanf("%f", &porcen);

    for (cont = 1; cont <= 4; cont++)
    {
        printf("\nQual o salário do funcionário a ser reajustado?");
        scanf("%f", &salario);
        reajustado = salario + (salario * porcen / 100);
        printf("O salário atualizado é %.2f\n", reajustado);

        if (reajustado > maior)
            maior = reajustado;
        
    }
    printf("\nO maior salário reajustado foi %.2f\n", maior);

    return 0;
}