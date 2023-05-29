/*
Exemplo 1: 
Digite dois numeros: 
2 
9
SOMA DOS IMPARES = 15*/

using System; 
using System.Globalization;

namespace soma_impares { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int num1, num2, soma = 0, troca;

            System.Console.WriteLine("Digite dois numeros: ");
            num1 = int.Parse(Console.ReadLine());
            num2 = int.Parse(Console.ReadLine());

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
            System.Console.WriteLine("SOMA DOS IMPARES = " + soma);
        }   
    } 
}