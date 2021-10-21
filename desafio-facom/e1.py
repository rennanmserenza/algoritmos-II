def fibonacci(n, b):
    soma = 0

    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return soma + fibonacci(n - 1) + fibonacci( n - 2)   
    

def main():
    
    count = 1
    n = int(input())
    b = int(input())

    while(n != 0 & b != 0):
        print(f"Case {count}: {n} {b}")
        count += 1