#include <stdio.h>
#include <locale.h>

int main() {

    int n;
    float quot_dois, quot_tres;

    setlocale(LC_ALL, "Portuguese");

    printf("Dig�te um n�mero: ");
    fflush(stdin);
    scanf("%d", &n);

    quot_dois = n / 2;
    quot_tres = n / 3;

    printf("\nO resultado da divis�o de %d por 2 e por 3 �: %.1f e %.1f\n", n, quot_dois, quot_tres);

    return 0;

}
