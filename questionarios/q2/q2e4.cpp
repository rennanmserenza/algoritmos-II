#include <stdio.h>
#define MAX 100

int lerVetor(int v[MAX][MAX], int m, int n);

int somaVetor(int p[MAX][MAX], int q[MAX][MAX], int r[MAX][MAX], int m, int n);

int imprimeVetor(int v[MAX][MAX], int m, int n);

int main() {
    int m, n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    fflush(stdin);
    scanf("%d %d", &m, &n);

    lerVetor(A, m, n);
    lerVetor(B, m, n);

    somaVetor(A, B, C, m, n);

    imprimeVetor(C, m, n);

    return 0;
}

int lerVetor(int v[MAX][MAX], int m, int n) {
    int i, j;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    return 0;
}

int somaVetor(int p[MAX][MAX], int q[MAX][MAX], int r[MAX][MAX], int m, int n) {
    int i, j;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            r[i][j] = p[i][j] + q[i][j];
        }
    }

    return 0;
}

int imprimeVetor(int v[MAX][MAX], int m, int n) {
    int i, j;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}