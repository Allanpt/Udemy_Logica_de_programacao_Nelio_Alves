/*
Exemplo 1: 
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000 
PERIMETRO = 18.0000 
DIAGONAL = 6.4031
*/


#include<stdio.h>
#include<math.h>
int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base + altura) * 2;
    diagonal = sqrt(base*base + altura*altura);

    printf("\nAREA = %.4lf", area);
    printf("\nPERIMETRO = %.4lf", perimetro);
    printf("\nDIAGONAL = %.4lf", diagonal);

    return 0;
}
