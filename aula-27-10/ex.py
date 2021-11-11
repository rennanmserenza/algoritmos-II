# palavra = list(input())

# x = len(palavra) - 1

# k = True
# for i in range(0, len(palavra) // 2):
#     if palavra[i] != palavra[x]:
#         k = False
#     x -= 1

# if k:
#     print("palíndromo")
# else:
#     print("não palíndromo")




# def ehpalindromo(f):
#   palavra = list(f)

#   x = len(palavra) - 1
#   for i in range(0, len(palavra) // 2):
#       if palavra[i] != palavra[x]:
#         return False
#       x -= 1

#   return True

# def main():
#   palavra = input()

#   if ehpalindromo(palavra):
#       print("palíndromo")
#   else:
#       print("não palíndromo")

# main()



pad = input()
seq = input()
tamanho = len(pad)

i, x = 0, 0

while i < tamanho and x < len(seq):
    if pad[i] == seq[x]:
        i += 1
        x += 1

    else:
        i = 0
        x += 1

if i == tamanho:
    msg = 'S'
else:
    msg = 'N'

print(msg)