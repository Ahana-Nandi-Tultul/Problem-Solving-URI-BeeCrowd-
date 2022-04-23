





am=list(map(int, input().split()))
n1="A"
n2=0
sum=0
for i in am:
    if n1=="A":
        n1=i
    else:
        if i>0:
          n2=i
          break
for i in range(n2):
    sum=sum+n1;
    n1=n1+1

print(sum)