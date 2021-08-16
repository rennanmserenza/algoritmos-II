#include <stdio.h>
#include <locale.h>

int main() {

    int resultado;

    setlocale(LC_ALL, "Portuguese");

    resultado = 73 - 14;
    printf("O resultado da subtração de 73 e 14 é : %d\n", resultado);
    return 0;

}
