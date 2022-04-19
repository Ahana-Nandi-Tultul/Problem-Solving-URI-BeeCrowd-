







n=int(input())
m=int(input())
ax=int()
if(m>n):
    ax=m
    m=n
    n=ax
m=m+1
while(m<n):
    if(m%5==3 or m%5==2):
        print(m)
    m=m+1

