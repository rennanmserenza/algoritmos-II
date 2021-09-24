#include <stdio.h>
#define MAX 10


int lerVetor(int v[MAX][MAX], int m, int n);

int multiplicaVetor(int p[MAX][MAX], int q[MAX][1], int r[MAX][1], int m, int n);


int main() {
    int m, n, i;
    int A[MAX][MAX], B[MAX][1], C[MAX][1];
    
    fflush(stdin);
    scanf("%d %d", &m, &n);

    lerVetor(A, m, n);

    for (i = 0; i < n; i++) {
        scanf(" %d", &B[i][1]);
    }
    
    multiplicaVetor(A, B, C, m, n);

    for (i = 0; i < m; i++) {
        printf("%d ", C[i][1]);
    }

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

int multiplicaVetor(int p[MAX][MAX], int q[MAX][1], int r[MAX][1], int m, int n) {
    int i, j, soma;

    for (i = 0; i < m; i++) {
        soma = 0;

        for (j = 0; j < n; j++) {
            soma += p[i][j] * q[j][1];
        }

        r[i][1] = soma;
    }

    return 0;
}
