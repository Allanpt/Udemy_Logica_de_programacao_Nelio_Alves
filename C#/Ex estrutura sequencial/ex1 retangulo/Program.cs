/*Exemplo 1: 
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000 
PERIMETRO = 18.0000 
DIAGONAL = 6.4031 */

using System; 
using System.Globalization;

namespace ola_mundo { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double baseRetangulo, altura, area, perimetro, diagonal;

            Console.Write("Base do retangulo: ");
            baseRetangulo = double.Parse(Console.ReadLine(), CI);

            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = baseRetangulo * altura;
            perimetro = (baseRetangulo + altura) * 2;
            diagonal = Math.Sqrt(baseRetangulo*baseRetangulo + altura * altura);

            System.Console.WriteLine();
            Console.WriteLine("ÁREA = " + area.ToString("F4", CI));
            Console.WriteLine("PERÍMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));
            


        }   
    } 
}