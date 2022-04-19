





n=str.lower(input())
if n=="vertebrado" :
    n1=str.lower(input())
    if n1=="ave":
        n3=str.lower(input())
        if n3=="carnivoro" :
            print("aguia")
        elif n3=="onivoro":
            print("pomba")
    elif n1=="mamifero":
        n3 = str.lower(input())
        if n3 == "herbivoro":
            print("vaca")
        elif n3 == "onivoro":
            print("homem")
elif n=="invertebrado" :
    n1=str.lower(input())
    if n1=="inseto":
        n3=str.lower(input())
        if n3=="hematofago" :
            print("pulga")
        elif n3=="herbivoro":
            print("lagarta")
    elif n1=="anelideo":
        n3 = str.lower(input())
        if n3 == "hematofago":
            print("sanguessuga")
        elif n3 == "onivoro":
            print("minhoca")