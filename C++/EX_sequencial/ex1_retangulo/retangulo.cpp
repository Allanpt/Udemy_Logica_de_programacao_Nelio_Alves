/*
Exemplo 1: 
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000 
PERIMETRO = 18.0000 
DIAGONAL = 6.4031 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Base do retangulo: ";
    cin >> base;
    cout << "Altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = (base + altura) * 2;
    diagonal = sqrt(base*base + altura*altura);

    cout << endl;
    cout << fixed << setprecision(4);
    cout << "AREA = " << area << endl;
    cout << "PERIMETRO = " << perimetro << endl;
    cout << "DIAGONAL = " << diagonal << endl;

    return 0;
}

