#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    int n;
    int quadrado, cubo;

    setlocale(LC_ALL, "Portuguese");

    fflush(stdin);
    printf("Digite um n�mero para obter seu quadrado e seu cubo, n�mero: ");
    scanf("%d", &n);

    quadrado = pow(n, 2);
    cubo = pow(n, 3);

    printf("\nO quadrado e o cubo do n�mero %d �: %d e %d\n", n, quadrado, cubo);

    return 0;

}
