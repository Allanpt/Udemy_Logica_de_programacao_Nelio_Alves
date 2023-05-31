/*
Exemplo: 
Qual a ordem da matriz? 3
Elemento [0,0]: 5 
Elemento [0,1]: -3 
Elemento [0,2]: 10
Elemento [1,0]: 15 
Elemento [1,1]: 8 
Elemento [1,2]: 2
Elemento [2,0]: 7 
Elemento [2,1]: 9 
Elemento [2,2]: -4
DIAGONAL PRINCIPAL: 
5 8 -4 
QUANTIDADE DE NEGATIVOS = 2 
*/
using System; 
using System.Globalization;

namespace diagonal_negativos { 
    class Program { 
        static void Main(string[] args) { 

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n;
            System.Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];
        

            for (int i = 0; i < n; i++) { 
                for (int j = 0; j < n; j++) {
                    System.Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i,j] = int.Parse(Console.ReadLine());
                }
            }

            System.Console.WriteLine("DIAGONAL PRINCIPAL:");
            for (int i = 0; i < n; i++) { 
                System.Console.Write(mat[i,i] + " ");
                    
            } 

            System.Console.WriteLine();
            int soma_negativos = 0;
            for (int i = 0; i < n; i++) { 
                for (int j = 0; j < n; j++) {
                    if (mat[i,j] < 0) {
                        soma_negativos++;
                    }
                }
            }

           System.Console.WriteLine("QUANTIDADE DE NEGATIVOS = " + soma_negativos);

        
        }   
    } 
}