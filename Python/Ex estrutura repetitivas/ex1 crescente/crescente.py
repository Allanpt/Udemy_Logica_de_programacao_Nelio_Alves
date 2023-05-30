"""
Exemplo: 
Digite dois numeros: 
5 
4 
DECRESCENTE! 
Digite outros dois numeros: 
3 
8 
CRESCENTE! 
Digite outros dois numeros: 
2 
2
"""

print("Digite dois numeros: ")
num1 = int(input())
num2 = int(input())

while num1 != num2:
    if num1 > num2:
        print("DECRESCENTE!")
    else:
        print("CRESCENTE!")
    
    print("Digite outros dois numeros: ")
    num1 = int(input())
    num2 = int(input())