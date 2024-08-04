#include <stdio.h>
int main()
{                                            
    const int tamvet=50, tamlista=10;    
    int vet[tamvet],posicao,posvet,achou,numero;
    printf ("\n Digite os dados do vetor \n");
    for (posicao=0;posicao<tamvet;posicao++)
    {    scanf ("%d",&vet[posicao]);    
    }    
    printf ("\n Digite numeros a procurar: \n");    
    for (posicao=1;posicao<=tamlista;posicao++) 
    {    
        printf("\nDigite um número: ");
        scanf ("%d",&numero);        
             
        posvet=0;        
        achou=0;        
        while (posvet<=tamvet-1 && achou==0) 
        {    
            if (numero==vet[posvet])
            {   
                achou=1;                
            } else 
            {    posvet++;   
            } 
        }    
            if (achou==1)    
            {    printf("achou na posição: %d\n", posvet);
            } else
            {    printf("nao achou o numero\n");
            }
    }
}