/*Exemplo 1: 
Primeiro valor: 7
Segundo valor: 3
Terceiro valor: 8
MENOR = 3 */

#include<stdio.h>

int main()
{
    int v1, v2, v3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &v1);

    printf("Segundo valor: ");
    scanf("%d", &v2);

    printf("Terceiro valor: ");
    scanf("%d", &v3);

    if (v1<v2 && v1<v3){
        menor = v1;

    } else if (v2 < v3){
        menor = v2;
    } else{
        menor = v3;
    }
    
    printf("\nMENOR = %d", menor);
    
    return 0;
}
