#include <stdio.h>
#define MAX 20

int leitura(int v[MAX]);

int main() {
    int discA[MAX], discB[MAX], intAB[MAX];
    int tamA, tamB;
    int i, j, k = 0;

    tamA = leitura(discA);
    tamB = leitura(discB);
    
    for (i = 0; i < tamA; i++) {
        for (j = 0; j < tamB; j++) {
            if (discB[j] == discA[i]) {
                intAB[k] = discB[j];
                k++;
            }
        }
    }

    if (k > 0) {
        for (i = 0; i < k; i++) {
           printf("%d ", intAB[i]);
        }
    }
    else {
        printf("vazia");
    }
    
    return 0;
}

int leitura(int v[MAX]) {
    int x, i;

    fflush(stdin);
    scanf("%d\n", &x);

    for (i = 0; i < x; i++) {
        scanf("%d", &v[i]);
    }

    return x;
}
