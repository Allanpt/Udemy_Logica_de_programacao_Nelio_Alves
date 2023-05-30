# 29/05/2023
. python é uma linguagem de tipagem dinâmica, pois não é preciso declarar o tipo da variável como em outras linguagens

## Operadores
.** exponenciação
.// divisão inteira

## Saída de dados

    print("bom dia", end="") 
.utilizado para não fazer a quebra de linha

    print(f"A funcionaria {nome}, sexo {sexo}, ganha 
    {salario:.2f} e tem {idade} anos")
.utilizado pra imprimir com interpolação

## Leia

    input() 
    input("mensagem")
.comando leia

    x = int(input("Digite um numero: "))
    x = float(input("Digite um numero: "))
.caso queiramos ler um numero ou outro tipo de dados, pois python tem como padrão uma string no 'input'

## for

    for variavel in range(valor_inicial, valor_final, [passo]):

## Vetores

    meu_vetor: [tipo] = [0 for x in range(numero_de_elementos)]

## Matriz

    minha_matriz: [[tipo]] = [[0 for x in range(numero_de_colunas)] for x in range(numero_de_linhas)]