/*
Exemplo: 
Dados da primeira pessoa: 
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa: 
Nome: Joao Melo
Idade 20
A idade média de Maria Silva e Joao Melo é de 19.5 anos*/

#include<stdio.h>
#include<string.h>

void ler_texto(char *buffer, int length) { 
 fgets(buffer, length, stdin); 
 strtok(buffer, "\n"); 
} 
void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
}

int main()
{
    char nome1[50];
    int idade1;
    char nome2[50];
    int idade2;
    double media_idade;

    printf("Dados da primeira pessoa:\n ");
    printf("\nNome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("\n");

    printf("Dados da segunda pessoa:\n ");
    printf("\nNome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media_idade = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media_idade);


    return 0;
}
