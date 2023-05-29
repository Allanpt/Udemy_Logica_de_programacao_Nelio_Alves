/*Exemplo: 
Dados da primeira pessoa: 
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa: 
Nome: Joao Melo
Idade 20
A idade média de Maria Silva e Joao Melo é de 19.5 anos */

using System; 
using System.Globalization;

namespace idades { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;
            
            string nome1, nome2;
            int idade1, idade2;
            double media;

            System.Console.WriteLine("Dados da primeira pessoa: ");
            System.Console.Write("Nome: ");
            nome1 = Console.ReadLine();
            System.Console.Write("Idade: ");
            idade1 = int.Parse(Console.ReadLine(), CI);

            System.Console.WriteLine("Dados da segunda pessoa: ");
            System.Console.Write("Nome: ");
            nome2 = Console.ReadLine();
            System.Console.Write("Idade: ");
            idade2 = int.Parse(Console.ReadLine(), CI);

            media = (idade1 + idade2) / 2.0;

            System.Console.WriteLine();
            System.Console.WriteLine("A idade media de " + nome1 + " e " + nome2 + " eh de " + media.ToString("F1", CI) + " anos");

            
        }   
    } 
}
