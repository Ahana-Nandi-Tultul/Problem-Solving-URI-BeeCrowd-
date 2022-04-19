





n= float(input())

if 0.00 < n <= 2000.00:
    print("Isento")
elif n > 2000.00:
    n1 =float( n - 2000.00)
    if 0.00 < n1 <= 1000.00:
        rate = ( 0.08 * n1)
        print(f"R$ {rate:0.2f}")
    elif 1000.00 < n1 <=1500.00 :
        n2= n1-1000.00
        first_rate=1000.00*0.08;
        second_rate=n2 * 0.18
        rate=first_rate+second_rate
        print(f"R$ {rate:0.2f}")
    elif n1>1500.00:
        n2 = n1 - 1000.00
        n3 = n2-1500
        first_rate = 1000.00 * 0.08
        second_rate = 1500.00 * 0.18
        third_rate= n3 * 0.28
        rate = first_rate + second_rate +third_rate
        print(f"R$ {rate:0.2f}")
