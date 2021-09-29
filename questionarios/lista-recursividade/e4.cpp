#include <stdio.h>

int piso_log2(int n);

int main() {
    int n;

    fflush(stdin);
    scanf("%d", &n);

    printf("%d", piso_log2(n));
}

int piso_log2(int n) {
    int count = 0;

    if (n > 1) {
        count += 1;
        count += piso_log2(n / 2);
    }

    return count;
}