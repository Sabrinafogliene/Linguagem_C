#include <stdio.h>

int main(){
    int soma, cont;
    soma=0;
    for (cont=1; cont<=10; cont=cont+1){

        soma=soma+cont;
    }
    printf("A soma de todos os números entre 1 e 10 é = %d\n", soma);
    return 0;
}