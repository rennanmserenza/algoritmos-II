#include <stdio.h>
#include <locale.h>

int main() {

    int a, b, c;
    int resultado;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite tr�s valores: ");
    fflush(stdin);
    scanf("%d %d %d", &a, &b, &c);

    resultado = a * b + c;

    printf("\nO resultado da multiplica��o de %d por %d e da soma com %d �: %d\n", a, b, c, resultado);

    return 0;
}
