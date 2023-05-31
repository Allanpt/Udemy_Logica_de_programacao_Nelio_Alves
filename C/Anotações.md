# 22/05/2023 - Tipos de dados e Variáveis

.Número inteiro -> 'int'
.Número flutuante -> 'double' ou 'float'(precisão simples)
.Um ÚNICO caractere -> 'char'
.Texto ->'char[]'
.Valor lógico -> 'int'

## Biblioteca de strings
'#include <string.h>'

## Atribuições rápidas

.A linguagem C aceita atribuições direteamente na declaração da variável
Ex:
int idade = 20;

## Saída de Dados em C

. printf() -> imprime no terminal o resultado declarado
.Para darmos espaço entre as linhas de baixo pra cima nós podemos declarar um "\n" no final da saída de dados
. Para cada tipo de variáveis existe um "placeholder" na saída de dados em C
Ex:
    int main(){
        int x = 20;
        printf("%d",x); "%d" é o placeholder da variável 'int'
    }
.%d -> Placeholder de int
.%f -> P.H de float
.%lf -> P.H de double
.%c -> P.H de char
.%s -> P.H de char[]

.Quando quisermos imprimir um número decimal de 'double' nós podemos especificar quantas casas decimais nós queremos imprimir.
Ex:
    int main(){
        double salario = 5000.5
        printf("%.2lf\n", salario) -> "5000.50"
    }

.Para imprimir um texto completo precisamos colocar todos os Placeholders primeiro na declaração, para depois da vírgula, declarar as variáveis.
Ex:
    int idade = 20;
    double salario = 5000.9;
    char sexo = 'F';
    char nome[50] = "Maria silva";

    printf("A funcionária %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);

    resultado: A funcionária Maria Silva, sexo F, ganha 5000.90 e tem 20 anos.

# 23/05/2023 - Casting

    double a;
    int b; 
    a = 5.0; 
    b = (int) a; -> em "C" não precisa especificar o 'int'
    printf("%d\n", b);

.repare que 'b' é inteiro então quando imprimir o resultado teremos somente um número inteiro

    int a, b;
    double resultado;
    a = 5; 
    b = 2; 
    resultado = a / b; 
    printf("%d\n", resultado);

res: 2.00000
.repare que 'resultado' é double mas 'a' e 'b' são int

    int a, b;
    double resultado;
    a = 5; 
    b = 2; 
    resultado = (double) a / b; 
    printf("%d\n", resultado);

res: 2.50000
.repare que foi feito um 'casting' em 'a' para o compilador trazer o resultado correto

## Entrada de dados - leia utilizando scanf
.para podermos inserir um dado dentro de uma variável usamos o 'scanf' para dados SIMPLES SEM ESPAÇOS.

    scanf("%d", &idade);

.repare que tem um '&'. Esse & é preciso para o computador armazenar a variável.
.não podemos esquecer tbm de colocar o placeholder correspondente à variável
.quando queremos que o usuário digite um nome, não precisamos colocar o &.

    char nome[50];

    printf("Digite o nome da pessoa: ");
    scanf("%s", nome);

## Entrada de dados - leia utilizando fgets

    fgets(variável, tamanho da string, stdin)

    fgets(nome, 50, stdin)

.Não podemos esquecer de sempre limpar a entrada de dados de uma string por conta do espaço vazio 'enter'

função 'limpar entrada':
    void limpar_entrada() { 
    char c; 
    while ((c = getchar()) != '\n' && c != EOF) {} 
} 
.colocamos a função no começo do código depois de declarar as bibliotecas. Depois, nós invocamos a função antes de chamar o 'fgets' no código.

    limpar_entrada();
    fgets(nome, 50, stdin);

.o 'fgets' tbm armazena a quebra de linha com 'enter'. Para evitar isso podemos utilizar depois do 'fgets' o:

    strtok(variável, "\n");

. para evitar a cópia das ferramentas 'fgets' e 'strtok' sempre que for chamado uma string, nós podemos utilizar uma função de ler texto:

    void ler_texto(char *buffer, int length) { 
    fgets(buffer, length, stdin); 
    strtok(buffer, "\n"); 
}
. Ela vai ser declarada tbm junto com a função de limpar entrada
. Dps é só invocar ela no código
Ex:

    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    ler_texto(nome, 50); -> variável, caracteres

.para todo caractere isso vai ser necessário
.o primeiro caractere não precisa ser limpado

## Vetores

    double vet[N];

.tipo_do_vetor nome[valores_do_vetor]

## Matriz

    int mat[M][N];

.tipo_da_matriz nome[valores_das_linhas][valores_das_colunas]