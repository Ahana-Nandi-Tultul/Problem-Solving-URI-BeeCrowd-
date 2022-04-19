





j=int(input())
i=int(1)
z=float()
while(i<=j):
    n,m=input().split()
    n=int(n)
    m=int(m)
    if m==0 :
      print("divisao impossivel")
    else:
        z=(n/m)
        print('%.1f'%z)
    i=i+1