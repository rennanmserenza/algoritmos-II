#include <stdio.h>
#include <locale.h>

int main() {

    int a, b, c;
    int resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite três valores: ");
    fflush(stdin);
    scanf("%d %d %d", &a, &b, &c);

    resultado = a * b + c;

    printf("\nO resultado da multiplicação de %d por %d e da soma com %d é: %d\n", a, b, c, resultado);

    return 0;
}
