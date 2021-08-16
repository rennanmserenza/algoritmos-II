#include <stdio.h>
#include <locale.h>

int main() {

    int a, b, c;
    int soma, produto;

    setlocale(LC_ALL, "Portuguese");

    printf("Digíte três valores: ");
    fflush(stdin);
    scanf("%d %d %d", &a, &b, &c);

    soma = a + b + c;
    produto = a * b * c;

    printf("\nA soma e o produto de %d, %d e %d é: %d e %d\n", a, b, c, soma, produto);

    return 0;
}
