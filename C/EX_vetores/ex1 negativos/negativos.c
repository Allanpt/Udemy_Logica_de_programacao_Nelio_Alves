/*Exemplo: 
Quantos numeros voce vai digitar? 6
Digite um numero: 8
Digite um numero: -2
Digite um numero: 9
Digite um numero: 10
Digite um numero: -3
Digite um numero: -7
NUMEROS NEGATIVOS: 
-2 
-3 
-7 */
#include<stdio.h>
#include<math.h>

int main() { 

    int n, i;
    

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (i = 0; i < n ; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

    }

    printf("\nNUMEROS NEGATIVOS:\n ");

    for (i = 0; i < n; i++)
    {
        if (vet[i] < 0)
        {
            printf("\n%d", vet[i]);
        }
    }
    
    return 0; 
}
