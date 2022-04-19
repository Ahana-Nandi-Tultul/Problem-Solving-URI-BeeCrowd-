




al=int(0)
ga=int(0)
di=int(0)
n=int()
while(True):
    n = int(input())
    if n==4:
        break
    while (True):
        if n == 1:
            al = al + 1
            break
        elif n == 2:
            ga = ga + 1
            break
        elif n == 3:
            di = di + 1
            break
        elif n>4:
            break
        elif n<1:
            break

print(f"MUITO OBRIGADO")
print(f"Alcool: {al}")
print(f"Gasolina: {ga}")
print(f"Diesel: {di}")