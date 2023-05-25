# 25/05/2023
Linguagem orientada a objetos
## Enter point

    public static void main (String[] args) {
    }

## Variáveis e tipos de dados

int e long -> inteiro
double
char
String
boolean

    idade = 20;
.criação da variável

    System.out.println("IDADE = " + idade);
.print da variável

## Entrada de dados
import java.util.Locale; -> biblioteca

    Locale.setDefault(Locale.US);
.Usado para garantir a separação em '.' com números decimais

    System.out.println("SALARIO = " + String.format("%.2f", salario));
.String.format para imprimir as casas decimais depois da vírgula

    int idade;
    double salario; 
    String nome; 
    char sexo;

    idade = 32; 
    salario = 4560.9; 
    nome = "Maria Silva"; 
    sexo = 'F'; 

    System.out.println("A funcionaria " + nome + 
    ", sexo " + sexo + ", ganha " + 
    String.format("%.2f", salario) + " e tem " + 
    idade + " anos"); 

. Em java utilizamos o '+' para concatenar as strings com as variáveis para imprimir no prompt

.Em java não temos o 'return 0;'

."Leia" em Java é:

    import java.util.Scanner;
    import java.util.Locale;

    public class Main {
 
    public static void main (String[] args) {

        Locale.setDefault(Locale.US); 
        Scanner sc = new Scanner(System.in); 

        int idade;
        String nome1;

        System.out.println("Digite sua idade: ");
        idade = sc.nextInt();
        System.out.print("Digite seu nome completo: ");
        sc.nextLine();
        nome = sc.nextLine();

        sc.close();

    }
} 

.perceba que:

    import java.util.Scanner;

foi utilizado para trazer a biblioteca 'scanner' que é utilizada para leitura de dados

    Scanner sc = new Scanner(System.in);

foi declarado a utilização do método scanner como uma função chamada 'sc'

    idade = sc.nextInt();

foi declarado para que o usuário insira um valor na variável 'idade'

    int x = sc.nextInt(); 
    double y = sc.nextDouble(); 
    char z = sc.next().charAt(0); -> lê apenas a primeira letra
    String s = sc.nextLine();

cada variável tem sua forma de declaração no método 'leia' ou 'scanner'

perbeca tbm que:

    sc.nextLine();

foi utilzado o método de limpeza de buffer como em outras linguagens como C e C++

    sc.close();

foi utilizado um fechamento do método 'scanner' no final do código

    


