/*Exemplo 1: 
Coeficiente a: 1
Coeficiente b: 0
Coeficiente c: -9
X1 = 3.0000 
X2 = -3.0000 
*/

#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, x1, x2, delta;

    printf("Coeficiente a: ");
    scanf("%lf", &a);

    printf("Coeficiente b: ");
    scanf("%lf", &b);

    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = (b*b) - 4*a*c;

    x1 = (-b + sqrt(delta) / (2*a));
    x2 = (-b - sqrt(delta) / (2*a));

    if (delta < 0 || a == 0)
    {
        printf("\nEsta equacao nao possui raizes reais");
    }else {
        printf("\nX1 = %.4lf", x1);
        printf("\nX2 = %.4lf", x2);
    }

    return 0;
}
