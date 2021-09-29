#include <stdio.h>
#define MAX 20

int conta(int n, int *W, int k);


int main() {
    int W[MAX];
    int i, k, n;

    fflush(stdin);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %d", &W[i]);
    }

    fflush(stdin);
    scanf("%d", &k);

    printf("%d", conta(n, W, k));
    
    return 0;
}


int conta(int n, int *W, int k) {
    int count = 0;

    if (n == 0) {
        return count;
    }
    else {
        if (W[n - 1] == k) {
            count += 1;
        }

        if (n >= 1) {
            count += conta((n - 1), W, k);
        }
    }

    return count;
}
/*

//Annia
int conta(int n, int *W, int k) {
    int i, cont = 0, aux;


    if(n == 0) {
        cont = 0;
    }

    else if(n == 1 && W[0] == k) {
        cont += 1;
    }

    else {
        aux = conta(n-1, W, k);

        if(W[n-1] == k) {
            cont += 1 + aux;
        }
        else {
            cont = aux;
        }
    }

    return cont;
}

// Miguel

int conta(int n, int *W, int k){
    int cont = 0;

    if(n == 0) {
        return cont;
    }

    else if(n == 1 && W[0] == k) {
        return cont += 1;
    }

    else {
        if(W[n - 1] == k){
            return cont += 1 + conta(n - 1, W, k);
        }
        return conta(n - 1, W, k);
    }
}*/