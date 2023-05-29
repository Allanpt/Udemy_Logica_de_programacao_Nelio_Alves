/*
Exemplo 1: 
Digite dois numeros: 
2 
9
SOMA DOS IMPARES = 15*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2, soma = 0, troca;

    cout << "Digite dois numeros: " << endl;
    cin >> num1;
    cin >> num2;

    if (num1 > num2)
    {
        troca = num1;
        num1 = num2;
        num2 = troca;
    }
    
    for (int i = num1 + 1; i < num2; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
        
    }
    cout << "SOMA DOS IMPARES = " << soma << endl;
}