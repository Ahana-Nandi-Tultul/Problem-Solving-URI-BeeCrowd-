





ax=int(0)
sum=int(0)
while(True):
    n, m=input().split()
    n=int(n)
    m=int(m)
    if(n<=0 or m<=0):
        break;
    else:
        if n<m:
            ax=n
            n=m
            m=ax
        i=m;
        while(i<=n):
            sum=sum+i
            print(i, end =" "),

            i=i+1
        print(f"Sum={sum}")
        sum=0


