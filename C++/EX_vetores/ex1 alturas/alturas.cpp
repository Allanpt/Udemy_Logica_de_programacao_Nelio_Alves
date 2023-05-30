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

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, pessoas_menor16 = 0;
    double media_altura, soma_altura = 0, percentual_de_pessoas_menor16;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;
    

    int vet_idade[n];
    string vet_nome[n];
    double vet_altura[n];

    for (int i = 0; i < n; i++) /*Coleta de dados*/
    {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, vet_nome[i]);
        cout << "Idade: ";
        cin >> vet_idade[i];
        cout << "Altura: ";
        cin >> vet_altura[i];
        soma_altura = soma_altura + vet_altura[i]; /*soma das alturas*/
    }
    cout << endl;

    media_altura = soma_altura / n; /*media das alturas*/

    for (int i = 0; i < n; i++)
    {
        if (vet_idade[i] < 16)
        {
            pessoas_menor16++;
        }
    }
    percentual_de_pessoas_menor16 = ((double)pessoas_menor16 / n) * 100; /*percentual menos de 16 anos*/

    cout << fixed << setprecision(2);
    cout << "Altura media: " << media_altura << endl;
    cout << fixed << setprecision(1); 
    cout << "Pessoas com menos de 16 anos: " << percentual_de_pessoas_menor16 << "%" << endl;

    for (int i = 0; i < n; i++) 
    {
        if (vet_idade[i] < 16)
        {
            cout << endl << vet_nome[i];
        }
    }

    return 0;
}