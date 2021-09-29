#include <stdio.h>

int potencia(int x, int n);

int main() {
    int x, n;

    fflush(stdin);
    scanf("%d %d", &x, &n);

    printf("%d", potencia(x, n));
}

int potencia(int x, int n) {
    int pot = 0;

    if (n == 0) {
        return pot = 1;
    }

    if (n == 2) {
        return pot = (x * x);
    }
    else {
        return pot = x * potencia(x, (n - 1));
    }
}