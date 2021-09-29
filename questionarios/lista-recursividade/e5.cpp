#include <stdio.h>

int potencia(int x, int n);

int main() {
    int x, n;

    fflush(stdin);
    scanf("%d %d", &x, &n);

    printf("%d", potencia(x, n));
}

int potencia(int x, int n) {

    if (n == 0) {
        return 1;
    }

    if (n == 2) {
        return x * x;
    }
    else {
        return x * potencia(x, (n - 1));
    }
}

/*

int potencia(int x, int n){
   
    if (n == 0) {
        return 1;
    }
    else if (n == 2) {
        return x * x;
    }
    else if (n % 2 == 0 && n > 2) {
        return potencia(x, (n / 2)) * potencia(x, (n / 2));
    }
    else {
        return x * potencia(x, n - 1);
    }
}

*/