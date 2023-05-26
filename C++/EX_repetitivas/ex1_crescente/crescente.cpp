/*Exemplo: 
Digite dois numeros: 
5 
4 
DECRESCENTE! 
Digite outros dois numeros: 
3 
8 
CRESCENTE! 
Digite outros dois numeros: 
2 
2*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Digite dois numeros: " << endl;
    cin >> num1;
    cin >> num2;

    while (num1 != num2){
        if (!(cin >> num1) || !(cin >> num2)){
            cout << "Entrada invalida. Tente novamente." << endl;
            break;
        }

        if (num1 > num2){
            cout << "DECRESCENTE!" << endl;

        } else {
            cout << "CRESCENTE!" << endl;

        }
        cout << "Digite outros dois numeros:" << endl;
        
    }
    cout << endl;
    cout << "FIM"<< endl;
    
    return 0;
}
