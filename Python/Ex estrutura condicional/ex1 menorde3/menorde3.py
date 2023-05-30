"""
Exemplo 1: 
Primeiro valor: 7
Segundo valor: 3
Terceiro valor: 8
MENOR = 3
"""

valor1 = int(input("Primeiro valor: "))
valor2 = int(input("Segundo valor: "))
valor3 = int(input("Terceiro valor: "))

if (valor1 < valor2 and valor1 < valor3):
    menor = valor1
elif (valor2 < valor3):
    menor = valor2
else:
    menor = valor3

print()
print(f"MENOR = {menor}")
