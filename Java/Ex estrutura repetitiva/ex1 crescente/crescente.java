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
2 */
import java.util.Scanner; 
import java.util.Locale;  

public class crescente {
    public static void main (String[] args) {
        
        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in);

        int num1, num2;

        System.out.println("Digite dois numeros: ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();

        while (num1 != num2) {
            if (num1< num2) {
                System.out.println("CRESCENTE!");
            } else {
                System.out.println("DECRESCENTE!");
            }
            
            System.out.println("Digite outros dois numeros: ");
            num1 = sc.nextInt();
            num2 = sc.nextInt();
        }
        System.out.println();
        System.out.println("FIM");

        sc.close();
    }
}