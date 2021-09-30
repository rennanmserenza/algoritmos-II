#include <stdio.h>
#define MAX 50

float somatoria(float n);

int main() {
    int k, i, j = 0;
    float aux, v[MAX];

    fflush(stdin);
    scanf("%d", &k);

    for (i = 0; i < k; i++) {
        scanf(" %f", &v[i]);
    }

    while (j < k) {
        aux = somatoria(v[j]);
        printf("%.2f\n", aux);

        j++;
    }

    return 0;
}

float somatoria(float n) {
    float soma = 0;
     
    if (n == 1) {
        return soma += 0.00;
    }
    else if (n >= 2) {
        return soma += ((n * n) - 1) / n + somatoria(n - 1);
    }

    return 0.00;
}