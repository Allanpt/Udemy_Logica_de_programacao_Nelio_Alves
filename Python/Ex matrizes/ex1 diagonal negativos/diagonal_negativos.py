"""
Exemplo: 
Qual a ordem da matriz? 3
Elemento [0,0]: 5 
Elemento [0,1]: -3 
Elemento [0,2]: 10
Elemento [1,0]: 15 
Elemento [1,1]: 8 
Elemento [1,2]: 2
Elemento [2,0]: 7 
Elemento [2,1]: 9 
Elemento [2,2]: -4

DIAGONAL PRINCIPAL: 
5 8 -4 
QUANTIDADE DE NEGATIVOS = 2 
"""
soma_negativos = 0

n = int(input("Qual a ordem da matriz? "))

mat = [[0 for x in range(n)] for x in range(n)]

for i in range(0, n):
    for j in range(0, n):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("DIAGONAL PRINCIPAL:")
for i in range(0, n):
    print(f"{mat[i][i]} ", end="")

print()
for i in range(0, n):
    for j in range(0, n):
        if mat[i][j] < 0:
            soma_negativos = soma_negativos + 1

print(f"QUANTIDADE DE NEGATIVOS = {soma_negativos}")
