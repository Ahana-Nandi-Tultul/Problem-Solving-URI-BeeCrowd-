







n=int()
m=int()
c=int()
inter=int(0)
grenais=int(0)
e=int(0)
count=int(0)
while (True):

    m, n=input().split()
    m=int(m)
    n=int(n)
    count=count+1
    if (m > n):
        inter = inter + 1
    elif (m < n):
        grenais = grenais + 1
    elif m == n:
        e = e + 1
    print("Novo grenal (1-sim 2-nao)")
    c=int(input())

    if(c==1):
        continue;
    elif(c==2):
        break;



print(f"{count} grenais")
print(f"Inter:{inter}")
print(f"Gremio:{grenais}")
print(f"Empates:{e}")
print(f"Inter venceu mais")

