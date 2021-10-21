from math import trunc

while True:
    
    try:
        num = input()
        cutoff = input()

    except EOFError:
        break
    
    num = str(float(num)).split('.')
    cutoff = str(float(cutoff)).split('.')
    
    if num[1] >= cutoff[1]:
        print(int(num[0]) + 1)
    else:
        print(int(num[0]))