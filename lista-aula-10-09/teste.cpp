#include <stdio.h>
#define DIM 5

int main() {

    int i=10, j=20;
    int *pti, *ptj;

    pti = &i;
    ptj = &j;

    pti++;

    printf("%d", pti);

    return 0;
}