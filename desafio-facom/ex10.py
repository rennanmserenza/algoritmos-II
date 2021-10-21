while True:
    try:
        T, A, W, C = map(int, input().split())
    except EOFError:
        break

    warning = T * (W / 100)
    critico = T * (C / 100)

    if A >= critico:
        print("critical")
    elif A >= warning:
        print("warning")
    else:
        print("OK")