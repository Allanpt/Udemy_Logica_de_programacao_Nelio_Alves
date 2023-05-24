/*
Exemplo 1: 
Digite a largura do terreno: 10.0
Digite o comprimento do terreno: 30.0
Digite o valor do metro quadrado: 200.00
Area do terreno = 300.00 
Preco do terreno = 60000.00 */

#include<stdio.h>

int main()
{
    double largura, comprimento, preco_metro, area, preco_total;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &preco_metro);

    area = largura * comprimento;
    preco_total = area * preco_metro;

    printf("\nArea do terreno = %.2lf", area);
    printf("\nPreco do terreno = %.2lf", preco_total);

    return 0;
}
