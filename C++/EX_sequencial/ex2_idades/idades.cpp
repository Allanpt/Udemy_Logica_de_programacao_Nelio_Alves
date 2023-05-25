/*
Exemplo: 
Dados da primeira pessoa: 
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa: 
Nome: Joao Melo
Idade: 20
A idade média de Maria Silva e Joao Melo é de 19.5 anos */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media_idade;

    cout << "Dados da primeira pessoa: " << endl;
    cout << endl;
    cout << "Nome: ";
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;

    cout << "Dados da segunda pessoa: " << endl;
    cout << endl;
    cout << "Nome: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media_idade = (double)(idade1 + idade2) / 2;

    cout << endl;
    cout << fixed << setprecision(1);
    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media_idade << " anos";

    return 0;
}
