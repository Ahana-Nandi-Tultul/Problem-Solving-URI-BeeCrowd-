





while(True):
    n, m=input().split()
    n=int(n)
    m=int(m)
    if n==m :
        break
    elif n>m:
        print("Decrescente")
    elif n<m:
        print("Crescente")