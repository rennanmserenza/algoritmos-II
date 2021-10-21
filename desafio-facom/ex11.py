seq = ("Q", "J", "K", "A")
N = int(input())

for i in range(0, N):
    S = str(input())
    
    count = 0

    for x in seq:
        for letra in S:
            if x == letra:
                count+= 1
                break
    
    if count == 4:
        print("Aaah muleke")
    else:
        print("Ooo raca viu")