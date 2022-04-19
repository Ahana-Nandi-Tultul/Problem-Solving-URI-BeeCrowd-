






n=int()
x=int()
y=int()
total=int(0)
sum=int(0)
n=int(input())
i=int(0)
j=int(0)
while i<n :
    x=int(input())
    y=int(input())
    if x<y:
        j=x;
        while j<y:
            if (j % 2 != 0):
                total=total+j
                sum=sum+1
                print(total)
            if sum==0:
                print(total)
            sum=0;
            total=0;
            j=j+1
    else:
        j=y
        while j<x:
            if (j % 2 != 0):
                total=total+j
                sum=sum+1
                print(total)
            if sum==0:
                print(total)
            sum=0;
            total=0;
            j=j+1