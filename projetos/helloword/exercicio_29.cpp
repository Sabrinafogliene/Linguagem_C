#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salbruto, salliquido, imposto, totbruto = 0, totliquido = 0, totimposto = 0;
    int cont;
    for (cont=1;cont<=15;cont++)
    {
        printf("Digite o salário bruto do funcionário:\n");
        scanf("%f", &salbruto);
        
        if (salbruto > 999) {
            imposto = salbruto * 0.10;
        } else if (salbruto > 1999) {
            imposto = salbruto * 0.15;
            } else if (salbruto > 9999) {
                imposto = salbruto * 0.20;
            } else if (salbruto < 99999) {
                    imposto = salbruto * 0.25;
                } else {
                    imposto = salbruto * 0.30;
                }
    
            salliquido = salbruto - imposto;
            printf("Salário Líquido: %.2f \n", salliquido);
            totbruto = totbruto + salbruto;
            totliquido = totliquido + salliquido;
            totimposto = totimposto + imposto;
    }
    
    printf("Total do salário bruto: %.2f \n", totbruto);
    printf("Total de salário líquido: %.2f \n", totliquido);
    printf("Total de imposto: %.2f \n", totimposto);
        
    return 0;

}