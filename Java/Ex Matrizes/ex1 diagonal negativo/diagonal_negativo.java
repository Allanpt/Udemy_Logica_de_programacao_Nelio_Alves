/*Exemplo: 
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

import java.util.Scanner; 
import java.util.Locale;  

public class diagonal_negativo {
    public static void main (String[] args) {
        
        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in);

        int n, soma_negativos = 0, cont;

        System.out.print("Qual a ordem da matriz? ");
        n = sc.nextInt();

        int[][] mat = new int[n][n];
        int[] diagonal = new int[n];

        for (int i = 0; i < n; i++) { /*coleta de dados */
            for (int j = 0; j < n; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j] = sc.nextInt();
            }
        }

        cont = 0;
        System.out.println("DIAGONAL PRINCIPAL:");
        for (int i = 0; i < n; i++) { /* adicionando os números da diagonal da matriz no vetor e imprimindo */
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    diagonal[cont] = mat[i][j];
                    System.out.print(diagonal[cont] + " ");
                    cont++;
                }
            } 
        }
        System.out.println();
        for (int i = 0; i < n; i++) { /*quantidade de negativos */
            for (int j = 0; j < n; j++) {
                if (mat[i][j] < 0) {
                    soma_negativos++;
                }
            }
        }

        System.out.println("QUANTIDADE DE NEGATIVOS = " + soma_negativos);

        sc.close();
    }
}