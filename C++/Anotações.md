# 24/05/2023 - Esqueleto

#include <iostream>

using namespace std;

int main()
{
 cout << "Ola mundo!" << endl;
 return 0;
} 

.repare que temos o "using namespace std;" que é uma forma de organizar os arquivos no projeto
.a biblioteca padrão é a <iostream>
.'cout' junto com 'endl' é a forma de imprimir algo na tela
. <iomanip> -> a biblioteca serve para formatar o número de casas decimais
.<string> -> a biblioteca serve para usar funções de manipulação de texto

## Variáveis e tipos de dados

.cout << fixed << setprecision(2); -> serve para fixar o número de casas decimais (nesse caso 2 casas).
. a variável 'char' se usa aspas simples: ''
. a variável "string" se usa aspas duplas: ""

## Operadores
.Iguais ao da linguagem C

## Saída de dados
.cout <<
. << endl -> pula linha
. Nós podemos usar tbm o "\n" para pular linha ao invés do "endl"
. Quando for usar um "double" eu posso fixar o setprecision na mesma linha da sáida de dados da variável.
EX:

    cout << fixed << setprecision(2)<< x << endl;

. A biblioteca "#include <bits/stdc++.h>" substitui todas as bibliotecas padronizadas do C++ 

## Casting
.é a mesma coisa do que na C
