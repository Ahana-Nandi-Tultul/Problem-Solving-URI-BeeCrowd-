








n=int(input())
c=int(1)
sum=int(0)
for i in range(1, n+1):
    x, y=input().split()
    x=int(x)
    y=int(y)
    while(c<=y):
        if (x%2!=0):
            sum=sum+x
            c=c+1
        x=x+1
    print(sum)
    c=1
    sum=0


