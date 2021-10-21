C = int(input())

for _ in range(0, C):
    N = int(input())
    esferas = list()

    for i in range(1, N+1):
        count = 0
        
        for x in range(1, i+1):
            if i % x == 0:
                count += 1
        
        if count % 2 == 0:
            esferas.append(i)

    print(f"{len(esferas)}")
