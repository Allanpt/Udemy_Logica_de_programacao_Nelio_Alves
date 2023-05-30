/*Quantos numeros voce vai digitar? 4
Digite um numero: 8.0
Digite um numero: 4.0
Digite um numero: 10.0
Digite um numero: 14.0
VALORES = 8.0 4.0 10.0 14.0 
SOMA = 36.00 
MEDIA = 9.00 */

#include<stdio.h>
#include<math.h>

int main() { 

    int n, i;
    double soma = 0, media;


    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }
    printf("\nVALORES = ");

    for (i = 0; i < n; i++)
    {
        printf("%.1lf ", vet[i]);
        
    }
    media = soma / n;

    printf("\nSOMA = %.2lf", soma);
    printf("\nMEDIA = %.2lf", media);
    
    return 0; 
}
