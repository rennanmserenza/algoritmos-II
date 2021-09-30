#include <stdio.h>
#define MAX 100

/* 

Recebe um número inteiro n >= 0, 
um vetor v[0..n-1] com n números inteiros 
e um número inteiro x 
e devolve k no intervalo [0, n-1] 
tal que v[k] == x. 
Se tal k não existe, devolve -1.

*/

int busca_sequencial(int n, int v[MAX], int x) {
    int k;

    for (k = n - 1; k >= 0 && v[k] != x; k--);

    return k;
}

/*

Recebe um número inteiro n >= 0, 
um vetor de números inteiros v[0..n-1] 
e um número x 
e devolve k tal que 0 <= k < n 
e v[k] == x.
Se tal k não existe, devolve -1.

*/
int busca_sequencial_R(int n, int v[MAX], int x) {
    if (n == 0)
        return -1;
    else
        if (x == v[n - 1])
            return n - 1;
        else
            return busca_sequencial_R(n - 1, v, x);
}

/*

Recebe um número inteiro n > 0, 
um vetor de números inteiros crescente v[0..n-1]
e um número inteiro x
e devolve um índice k em [0, n]
tal que v[k-1] < x <= v[k]

*/
int busca_binaria(int n, int v[MAX], int x) {
    int esq, dir, meio;

    esq = -1;
    dir = n;

    while (esq < dir - 1) {
        meio = (esq + dir) / 2;

        if (v[meio] < x)
            esq = meio;
        else
            dir = meio;
    }

    return dir;
}


/* 

Recebe dois números inteiros esq e dir,
um vetor de números inteiros crescente v[esq..dir]
e um número inteiro x
tais que v[esq] < x <= v[dir]
e devolve um índice k
em [esq+1, dir] 
tal que v[k-1] < x <= v[k]

*/

// dir = 10
// esq = -1
// x = 9
int busca_binaria_R(int esq, int dir, int v[MAX], int x) {
    int meio;

    if (esq == dir - 1)
        return dir;

    else {
        meio = (esq + dir) / 2;

        if (v[meio] < x)
            return busca_binaria_R(meio, dir, v, x);
        else
            return busca_binaria_R(esq, meio, v, x);
    }
}