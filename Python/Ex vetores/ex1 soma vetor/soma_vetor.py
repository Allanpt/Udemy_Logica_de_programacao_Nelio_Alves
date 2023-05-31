"""
Exemplo: 
Quantos numeros voce vai digitar? 4
Digite um numero: 8.0
Digite um numero: 4.0
Digite um numero: 10.0
Digite um numero: 14.0
VALORES = 8.0 4.0 10.0 14.0 
SOMA = 36.00 
MEDIA = 9.00
"""
soma = 0
n = int(input("Quantos numeros voce vai digitar? "))

vet = [0 for x in range(n)]

for i in range(0, n): #coleta de dados
    vet[i] = float(input("Digite um numero: "))

print("VALORES = ", end= "")
for i in range(0, n): #valores
    print(f"{vet[i]:.1f} ", end="")

for i in range(0, n): #soma
    soma = soma + vet[i]

print()
print(f"SOMA = {soma:.2f}")

media = soma / n
print(f"MEDIA = {media:.2f}")


