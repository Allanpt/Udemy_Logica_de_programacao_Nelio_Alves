/*Exemplo: 
Quantas pessoas serao digitadas? 5
Dados da 1a pessoa: 
Nome: Joao
Idade: 15
Altura: 1.82
Dados da 2a pessoa: 
Nome: Maria
Idade: 16
Altura: 1.60
Dados da 3a pessoa: 
Nome: Teresa
Idade: 14
Altura: 1.58
Dados da 4a pessoa: 
Nome: Carlos
Idade: 21
Altura: 1.65
Dados da 5a pessoa: 
Nome: Paulo
Idade: 17
Altura: 1.78

Altura média: 1.69 
Pessoas com menos de 16 anos: 40.0% 
Joao 
Teresa */
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
    int n, pessoas_menor16 = 0;
    double media_altura,soma_altura = 0, percentual_de_pessoas_menor16;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d",&n);

    int vet_idade[n]; 
    char vet_nome[n][50]; 
    double vet_altura[n];



    for (int i = 0; i < n; i++) /*Pegar os dados*/
    {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(vet_nome[i], 50);
        printf("Idade: ");
        scanf("%d", &vet_idade[i]);
        printf("Altura: ");
        scanf("%lf", &vet_altura[i]);
        soma_altura = soma_altura + vet_altura[i];
    }
    printf("\n");

    media_altura = soma_altura / n; /* Altura média das pessoas*/
    
    for (int i = 0; i < n; i++)
    {
        if (vet_idade[i] < 16)
        {
            pessoas_menor16++;
        }
        
    }
    percentual_de_pessoas_menor16 = ((double)pessoas_menor16 / n) * 100; /* Percentual de pessoas menor de 16 anos*/

    printf("Altura media: %.2lf", media_altura);
    printf("\n");
    printf("Pessoas com menos de 16 anos: %.1lf%%", percentual_de_pessoas_menor16);
    printf("\n");
    for (int i = 0; i < n; i++) /*Nomes de pessoas menores de 16 anos*/
    {
        if (vet_idade[i] < 16)
        {
            printf("\n%s", vet_nome[i]);
        }
        
    }
    


    return 0;
}