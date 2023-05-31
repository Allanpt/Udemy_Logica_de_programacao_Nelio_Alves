/*
Exemplo: 
Quantos numeros voce vai digitar? 4
Digite um numero: 8.0
Digite um numero: 4.0
Digite um numero: 10.0
Digite um numero: 14.0
VALORES = 8.0 4.0 10.0 14.0 
SOMA = 36.00 
MEDIA = 9.00
*/

using System; 
using System.Globalization;

namespace soma_vetor { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int n;
            double soma_vetor = 0, media;

            System.Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for (int i = 0; i < n; i++)
            {
                System.Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }

            System.Console.WriteLine();
            System.Console.Write("VALORES = ");

            for (int i = 0; i < n; i++)
            {
                System.Console.Write(vet[i].ToString("F1", CI) + " ");                
            }

            System.Console.WriteLine();
            
            for (int i = 0; i < n; i++)
            {
                soma_vetor = soma_vetor + vet[i];
            }
            
            media = soma_vetor / n;

            System.Console.WriteLine("SOMA = " + soma_vetor.ToString("F2", CI));
            System.Console.WriteLine("MEDIA = " + media.ToString("F2", CI));

        }   
    } 
}