#include <stdio.h>
#define MAX 20

int leitura(int v[MAX]) {
    int x, i;

    fflush(stdin);
    scanf("%d\n", &x);

    for (i = 0; i < x; i++) {
        scanf("%d", &v[i]);
    }

    return x;
}

int verifica(int x, int v[MAX]) {
    int i, maior, verif;

    maior = v[0];
    
    if (x <= 1) {
        verif = true;
    }
    else {
        for (i = 1; i < x; i++) {
            if (v[i] < maior) {
                verif = true;
            }
            else {
                verif = false;
                i = x;
            }
        }
    }

    return verif;
}

int main() {
    int vetL[MAX];
    int tam, sit;

    tam = leitura(vetL);
    sit = verifica(tam, vetL);

    if (sit) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}