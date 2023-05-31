/*
Exemplo: 
Qual a ordem da matriz? 3
Elemento [0,0]: 5 
Elemento [0,1]: -3 
Elemento [0,2]: 10
Elemento [1,0]: 15 
Elemento [1,1]: 8 
Elemento [1,2]: 2
Elemento [2,0]: 7 
Elemento [2,1]: 9 
Elemento [2,2]: -4
DIAGONAL PRINCIPAL: 
5 8 -4 
QUANTIDADE DE NEGATIVOS = 2 
*/
#include<stdio.h>
#include<math.h>

int main() { 

    int n;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Elemento [%d,%d]: ", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", mat[i][i]);
        printf(" ");
    }
    printf("\n");

    int soma_negativos = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] < 0)
            {
                soma_negativos++;
            }
            
        }
        
    }
    
    printf("QUANTIDADE DE NEGATIVOS = %d", soma_negativos);

    return 0; 
}
