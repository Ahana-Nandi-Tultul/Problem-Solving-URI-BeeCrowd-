






n=int(input())
total=int(0)
ra=int(0)
rt=int(0)
sa=int(0)
i=int(0)
while(i<n):
    amount, c=input().split()
    amount=int(amount)
    total = total+amount
    c=c.lower();
    if c == 'c':
        ra = ra+amount
    elif c == 'r':
        rt = rt+amount
    elif c == 's':
        sa = sa+amount

    i=i+1

print(f"Total: {total} cobaias")
print(f"Total de coelhos: {ra}")
print(f"Total de ratos: {rt}")
print(f"Total de sapos: {sa}")

ra_per=((ra/total)*100)
rt_per= ((rt/total)*100)
sa_per= ((sa/total)*100)
print(f"Percentual de coelhos: {'%.2f'%ra_per} %")
print(f"Percentual de ratos: {'%.2f'%rt_per} %")
print(f"Percentual de sapos: {'%.2f'%sa_per} %")






