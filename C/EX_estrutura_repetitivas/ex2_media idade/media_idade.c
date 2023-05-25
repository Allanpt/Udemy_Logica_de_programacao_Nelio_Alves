/*
Exemplo 1: 
Digite as idades: 
31 
27 
46 
-5 
MEDIA = 34.67*/

#include<stdio.h>

int main()
{
    int idade, soma = 0, vezes = 0;
    double media;

    printf("Digite as idades:\n ");
    scanf("%d", &idade);

    if (idade<0){
       printf("IMPOSSIVEL CALCULAR");
    } else{
        
        while (idade>=0){
            soma = soma + idade;
            vezes = vezes + 1;
            scanf("%d", &idade);
        }
        media = (double)soma / vezes;
        printf("MEDIA = %.2lf", media);
    }
    
    return 0;
}
