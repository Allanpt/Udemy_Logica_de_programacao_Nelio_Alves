"""
Exemplo 1: 
Digite dois numeros: 
2 
9
SOMA DOS IMPARES = 15 
"""

print("Digite dois numeros: ")
num1 = int(input())
num2 = int(input())

if num1 > num2:
    troca = num1
    num1 = num2
    num2 = troca

soma = 0
for i in range(num1 + 1, num2):
    if i % 2 != 0 :
        soma = soma + i

print(f"SOMA DOS IMPARES = {soma}")
