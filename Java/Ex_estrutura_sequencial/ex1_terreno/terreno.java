/*
 Exemplo 1: 
Base do retangulo: 4.0
Altura do retangulo: 5.0
AREA = 20.0000 
PERIMETRO = 18.0000 
DIAGONAL = 6.4031 
 */

package ex1_terreno;
import java.util.Scanner; /*Biblioteca leia */
import java.util.Locale;  /*Biblioteca de separar a fração em ponto '.' */
import java.lang.Math;

public class terreno {

    public static void main (String[] args) {
        
        Locale.setDefault(Locale.US); /*invocação da biblioteca */
        Scanner sc = new Scanner(System.in); /*invocação da biblioteca e declaração da função 'sc' */

        double diagonal, base, altura, area, perimetro;

        System.out.print("Base do retangulo: ");
        base = sc.nextDouble();

        System.out.print("Altura do retangulo: ");
        altura = sc.nextDouble();

        area = base * altura;
        perimetro = (base + altura) * 2;
        diagonal = Math.sqrt(base * base + altura * altura);

        System.out.println();
        System.out.println("AREA = " + String.format("%.4f", area));
        System.out.println("PERIMETRO = " + String.format("%.4f", perimetro));
        System.out.println("DIAGONAL = " + String.format("%.4f", diagonal));

        sc.close();


    }
}
