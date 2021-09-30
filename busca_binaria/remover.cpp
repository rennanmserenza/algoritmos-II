#include <stdio.h>
#define MAX 20

int cria_vetor(int n, int *v);

int insere(int n, int v[MAX], int k, int y);

/*
int remove(int &n, int v[MAX], int k);

int remove_R(int &n, int v[MAX], int k);
*/

int main() {
    int i;
    int n, k, y;
    int v[MAX];

    fflush(stdin);
    scanf("%d %d %d", &n, &k, &y);

    cria_vetor(n, v);
    
    //printf("%d\n", remove_R(n, v, k));

    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}


int cria_vetor(int n, int *v) {
    int i;

    for (i = 0; i < n; i++) {
        scanf(" %d", &v[i]);
    }

    return 0;
}

int insere(int n, int v[MAX], int k, int y) {
    
}

/*
int remove(int &n, int v[MAX], int k) {
    int i;

    for (i = k; i < (n - 1); i++) {
        v[i] = v[i + 1];
    }
    
    n--;

    return n;
}

int remove_R(int &n, int v[MAX], int k) {
    
    if (n == 1) {
        return n = -1;
    }

    else {
        v[k] = v[k + 1];

        if (k < (n - 1)) {
            return remove_R(n, v, (k + 1));
        }
    }

    n--;

    return n;
}*/