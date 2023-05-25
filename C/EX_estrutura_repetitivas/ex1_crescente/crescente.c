/*
Exemplo: 
Digite dois numeros: 
5 
4 
DECRESCENTE! 
Digite outros dois numeros: 
3 
8 
CRESCENTE! 
Digite outros dois numeros: 
2 
2*/

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("\nDigite dois numeros: \n");

    do{
        scanf("%d", &num1);
        scanf("%d", &num2);

        if (num1>num2){
            printf("\nDECRESCENTE!\n");
            printf("Digite outros dois numeros:\n");

        } else if (num1<num2){
            printf("\nCRESCENTE!\n");
            printf("Digite outros dois numeros:\n");
        } 
        
    } while (num1<num2 || num1>num2);

    return 0;
}
