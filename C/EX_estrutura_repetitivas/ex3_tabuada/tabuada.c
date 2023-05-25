/*
Exemplo: 
Deseja a tabuada para qual valor? 4
4 x 1 = 4 
4 x 2 = 8 
4 x 3 = 12 
4 x 4 = 16 
4 x 5 = 20 
4 x 6 = 24 
4 x 7 = 28 
4 x 8 = 32 
4 x 9 = 36 
4 x 10 = 40 
*/

#include<stdio.h>

int main()
{
    int tabuada, i;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &tabuada);
    
    for ( i = 1; i <= 10; i++){
        printf("\n%d x %d = %d", tabuada, i, tabuada*i);
    }
    printf("\n.");
    return 0;
}
