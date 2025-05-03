import os

print("Agora vamos calcular tabuada:")
num = int(input("Digite o número para o calculo: Maior que 0: "))
while num > 0:
    for i in range(11):
        print(num, "x", i ,"=",num*i)
      
    num = int(input("Digite o número para o calculo, Maior que 0: "))
    os.system("cls")
print("Você digitou um número menor ou igual a zero, Tchau")