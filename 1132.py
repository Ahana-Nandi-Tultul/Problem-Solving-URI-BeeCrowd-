





sum=int(0)
n=int(input())
m=int(input())
ax=int()
if(m>n):
    ax=m
    m=n
    n=ax
while(m<=n):
    if(m%13 !=0):
        sum=sum+m

    m=m+1
print(sum)

