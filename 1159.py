while(True):
    n= int(input())
    sum =0
    c=0
    if n==0:
        break
    if n%2!=0:
        n+=1
    for i in range(5):
        sum=sum+n
        n=n+2

    print(sum)



