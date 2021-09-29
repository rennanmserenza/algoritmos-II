#include <stdio.h>

#define TAM 100

int crescente(int v[TAM], int tam);


int main() {
    int L[TAM];
    int n, i, cresc;

    fflush(stdin);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d", &L[i]);
    }

    cresc = crescente(L, n);

    if (cresc == 1) {
        printf("verdadeiro");
    }
    else {
        printf("falso");
    }
}