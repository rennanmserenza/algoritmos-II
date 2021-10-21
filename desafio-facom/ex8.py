n = int(input())

while (n != 0):
    presentes = list(map(int, input().split()))
    aux = 0
    
    if n == 1:
        presenteCaro = presentes[0] + presentes[-1]
        presenteBarato = presenteCaro

    else:
        presenteCaro = presentes[0] + presentes[-1]
        
        presenteBarato = presentes[n - 1] + presentes[n]

        if presenteBarato > presenteCaro:
            aux = presenteCaro
            presenteCaro = presenteBarato
            presenteBarato = aux

    print(f"{presenteCaro} {presenteBarato}")

    n = int(input())    
    