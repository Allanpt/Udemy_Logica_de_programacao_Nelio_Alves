/*
Exemplo: 
Qual a quantidade de linhas da matriz? 2 
Qual a quantidade de colunas da matriz? 3
Digite os elementos da 1a. linha: 
7.0 
8.0 
10.0 
Digite os elementos da 2a. linha: 
2.0 
3.0 
5.0 
VETOR GERADO: 
25.0 
10.0*/

#include<stdio.h>
#include<math.h>

int main() { 

    int l, c;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &l);

    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &c);

    double mat[l][c], vet[l];

    for (int i = 0; i < l; i++)
    {
        printf("Digite os elementos da %da linha:\n", i+1);
        for (int j = 0; j < c; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
        
    }

    double soma_linha_matriz;
    printf("VETOR GERADO:\n");
    for (int i = 0; i < l; i++)
    {
        soma_linha_matriz = 0;
        for (int j = 0; j < c; j++)
        {
            soma_linha_matriz = soma_linha_matriz + mat[i][j];
        }
        vet[i] = soma_linha_matriz;
        printf("%.1lf\n", vet[i]);
    }
    
    return 0; 
}
