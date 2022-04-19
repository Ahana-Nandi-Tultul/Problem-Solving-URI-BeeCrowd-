





d=int(0)
sum=float(0)
avg=float(0.0)
while(True):
    if d==2:
        break
    n=float(input())
    if(n>=0.0 and n<=10.0):
        sum=sum+n
        d=d+1
    else:
        print("nota invalida")

avg=(sum/2)
print(f"media = {'%.2f'%avg}")