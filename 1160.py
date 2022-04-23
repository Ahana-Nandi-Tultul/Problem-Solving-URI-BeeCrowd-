
t=int(input())
for i in range(t):
    pa, pb, g1, g2=input().split()
    pa=int(pa)
    pb=int(pb)
    g1=float(g1)
    g2=float(g2)
    a=0
    while(pa<=pb):
        esti_pa=int((pa*(g1/100)))
        esti_pb=int((pb*(g2/100)))
        a=a+1
        pa=pa+esti_pa
        pb=pb+esti_pb
        if(a>100):
            break
    if(a>100):
        print("Mais de 1 seculo.")
    else:
        print(f"{a} anos.")

