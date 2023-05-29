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
using System; 
using System.Globalization;

namespace crescente { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int num1, num2;
            System.Console.WriteLine("Digite dois números: ");
            num1 = int.Parse(Console.ReadLine());
            num2 = int.Parse(Console.ReadLine());

            while (num1 != num2)
            {
                if (num1 > num2)
                {
                    System.Console.WriteLine("DECRESCENTE!");
                }
                else
                {
                    System.Console.WriteLine("CRESCENTE!");
                }
                System.Console.WriteLine("Digite outros dois numeros: ");
                num1 = int.Parse(Console.ReadLine());
                num2 = int.Parse(Console.ReadLine());
            }
        }   
    } 
}