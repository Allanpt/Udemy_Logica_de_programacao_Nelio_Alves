/*Exemplo 1: 
Digite dois numeros: 
2 
9
SOMA DOS IMPARES = 15 */
#include<stdio.h>

int main()
{
    int num1, num2, i, soma = 0;

    printf("Digite dois numeros: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 < num2){
        for ( i = num1+1; i < num2; i++){
            if (i % 2 != 0){
                soma = soma + i;
            }
        }
    }

    if (num1 > num2){
        for ( i = num1-1; i > num2; i--){
            if (i % 2 != 0){
                soma = soma + i;
            }
        }
    }
    printf("SOMA DOS IMPARES = %d", soma);

    return 0;
}
