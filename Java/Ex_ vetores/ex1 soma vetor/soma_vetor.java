/*Exemplo: 
Quantos numeros voce vai digitar? 4
Digite um numero: 8.0
Digite um numero: 4.0
Digite um numero: 10.0
Digite um numero: 14.0
VALORES = 8.0 4.0 10.0 14.0 
SOMA = 36.00 
MEDIA = 9.00 
 */

import java.util.Scanner; 
import java.util.Locale;  

public class soma_vetor {
    public static void main (String[] args) {
        
        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in);

        int n;
        double soma = 0, media;

        System.out.print("Quantos numeros voce vai digitar? ");
        n = sc.nextInt();

        double[] vet = new double[n];

        for (int i = 0; i < n; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextDouble();
            soma = soma + vet[i];
        }
        media = soma / n;

        System.out.println();
        System.out.print("VALORES = ");
        
        for (int i = 0; i < n; i++) {
            System.out.print(" " + String.format("%.1f", vet[i]));
        }
        System.out.println();
        System.out.println("SOMA = " + String.format("%.2f", soma));
        System.out.println("MEDIA = " + String.format("%.2f", media));

        sc.close();
    }
}