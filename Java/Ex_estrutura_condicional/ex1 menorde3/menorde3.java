/*Exemplo 1: 
Primeiro valor: 7
Segundo valor: 3
Terceiro valor: 8
MENOR = 3 
 */

import java.util.Scanner; 
import java.util.Locale;  

public class menorde3 {
    public static void main (String[] args) {
        
        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in);
        
        int val1, val2, val3, menor;

        System.out.print("Primeiro valor: ");
        val1 = sc.nextInt();
    
        System.out.print("Segundo valor: ");
        val2 = sc.nextInt();

        System.out.print("Terceiro valor: ");
        val3 = sc.nextInt();

        if (val1 < val2 && val1 < val3) {
            menor = val1;
        } else if (val2 < val3) {
            menor = val2;
        } else {
            menor = val3;
        }
        System.out.println();
        System.out.println("MENOR = " + menor);
        
        sc.close();

    }
}