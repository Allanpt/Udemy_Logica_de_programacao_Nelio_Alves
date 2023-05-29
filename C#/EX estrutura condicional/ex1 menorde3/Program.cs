/*Exemplo 1: 
Primeiro valor: 7
Segundo valor: 3
Terceiro valor: 8
MENOR = 3 */

using System; 
using System.Globalization;

namespace menorde3 { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int vlr1, vlr2, vlr3, menor;

            System.Console.Write("Primeiro valor: ");
            vlr1 = int.Parse(Console.ReadLine());

            System.Console.Write("Segundo valor: ");
            vlr2 = int.Parse(Console.ReadLine());

            System.Console.Write("Terceiro valor: ");
            vlr3 = int.Parse(Console.ReadLine());

            if (vlr1 < vlr2 && vlr1 < vlr3)
            {
                menor = vlr1;
            } else if (vlr2 < vlr3)
            {
                menor = vlr2;
            } else
            {
                menor = vlr3;
            }

            System.Console.WriteLine("MENOR = " + menor);
        }   
    } 
}