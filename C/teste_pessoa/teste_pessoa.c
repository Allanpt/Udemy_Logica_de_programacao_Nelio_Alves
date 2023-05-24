#include <stdio.h>
#include <string.h>

int main()
{


    int idade;
    double altura, salario;
    char nome[50];

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%lf", &altura);


    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Digite o salario: ");
    scanf("%lf", &salario);

    printf("IDADE = %d\n", idade); // Para 'int' o placeholder é %d
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("NOME = %s\n", nome); 

    return 0;
}
