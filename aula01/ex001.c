#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {

    float altura, peso;
    char sexo;
    int n;
    int i = 1;

    setlocale(LC_ALL, "Portuguese");

    printf("\nQuantas pessoas deseja analisar? ");
    fflush(stdin);
    scanf("%d", &n);

    do{
        printf("\nDigite sua altura: ");
        fflush(stdin);
        scanf("%f", &altura);

        printf("\nDigite seu sexo: ");
        fflush(stdin);
        scanf("%c", &sexo);

        if(toupper(sexo) == 'F') {
            peso = (62.1 * altura) - 44.7;
        }
        else if(toupper(sexo) == 'M') {
            peso = (72.7 * altura) - 58.0;
        }
        printf("\nSeu peso ideal é: %5.2f\n", peso);

        i = i + 1;
    } while(i <= n);
}
