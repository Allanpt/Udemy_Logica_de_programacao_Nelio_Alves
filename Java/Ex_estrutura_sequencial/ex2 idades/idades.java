/*
Exemplo: 
Dados da primeira pessoa: 
Nome: Maria Silva
Idade: 19
Dados da segunda pessoa: 
Nome: Joao Melo
Idade 20
A idade média de Maria Silva e Joao Melo é de 19.5 anos 
 */

import java.util.Scanner; 
import java.util.Locale;  

public class idades {
    public static void main (String[] args) {
        
        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in); 

        String nome1, nome2;
        int idade1, idade2;
        double media_idade;

        System.out.println("Dados da primeira pessoa:");
        System.out.print("Nome: ");
        nome1 = sc.nextLine();
        System.out.print("Idade: ");
        idade1 = sc.nextInt();

        System.out.println("Dados da segunda pessoa:");
        System.out.print("Nome: ");
        sc.nextLine();
        nome2 = sc.nextLine();
        System.out.print("Idade: ");
        idade2 = sc.nextInt();

        System.out.println();
        media_idade = (double) (idade1 + idade2) / 2;
        System.out.println("A idade media de " + nome1 + " e " + nome2 + " eh de " + media_idade + " anos.");

        sc.close();
    }   
}
