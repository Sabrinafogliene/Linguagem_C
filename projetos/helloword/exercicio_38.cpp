#include <stdio.h>

int main() {
    float notas[5]; // Declara um vetor de 5 inteiros
    int soma = 0;
    float media;
    int i;

    // Leitura das notas
    for (i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: \n", i + 1);
        scanf("%f", &notas[i]);
        while (getchar() != '\n');
    }

    // Cálculo da soma das notas
    for (i = 0; i < 5; i++) {
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / 5.0;

    // Impressão das notas e da média
    printf("Notas: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\nMédia: %.2f\n", media);

    return 0;
}
