#include <stdio.h>
#include <locale.h>

int main() {

    int resultado;

    setlocale(LC_ALL, "Portuguese");

    resultado = 73 - 14;
    printf("O resultado da subtra��o de 73 e 14 � : %d\n", resultado);
    return 0;

}
