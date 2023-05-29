# 27/05/2023
## Criar novo projeto
.código: dotnet new console

## TIPOS DE DADOS E VARIÁVEIS 
.mesmo de java

## Biblioteca - namespace

    using System; 

.usado para utilizar a impressão no prompt
.Console.Write / Console.WriteLine

    using System.Globalization;

    Console.WriteLine("VALOR DE X = " + x.ToString("F2", CultureInfo.InvariantCulture)); 

.usado para colocar um '.' no lugar da ',' em numeros fracionados.
.perceba que F2 é as casas depois da vírgula (nesse caso, 2 casas).

    CultureInfo CI = CultureInfo.InvariantCulture;

.nós podemos criar uma variável 'CI' para armazenar o valor de 'CultureInfo.InvariantCulture'.

## Comando "Leia"

    string x = Console.ReadLine(); 

.por padrão, o c# lê as strings

    int x = int.Parse(Console.ReadLine());
    double x = double.Parse(Console.ReadLine());
    char x = char.Parse(Console.ReadLine());

.temos que indicar o tipo da variável mais o 'Parse' fora do 'Console.Readline()'

    tipo_da_variável x = tipo_da_variável.Parse(Console.Readline())

.temos que colocar um "CI" tbm quando formos ler uma variável do tipo double

    salario1 = double.Parse(Console.ReadLine(), CI); 

## Matriz em C#

    int[,] mat = new int[M, N]; 
    