/*Exemplo 1: 
Digite a primeira nota: 45.5
Digite a segunda nota: 31.3
NOTA FINAL = 76.8 */

#include<stdio.h>


int main() {
    
    double nota1, nota2, soma;

    printf("\n");
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    soma = nota1 + nota2;
    printf("\n");
    printf("NOTA FINAL = %.2lf\n", soma);
    
    if (soma < 60){
        printf("REPROVADO\n");
    }
    printf("\n");
    
    return 0;
}
