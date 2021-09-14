#include <stdio.h>
#define MAX 100

int main() {
    int vet_L[MAX], n, i;
    bool seq;

    fflush(stdin);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &vet_L[i]);
    }
    
    for (i = 0; i < n - 1; i++) {
        if (vet_L[i] < vet_L[i + 1]) {
            seq = true;
        }
        else if (vet_L[i] >= vet_L[i + 1]) {
            seq = false;
            printf("falso");
            i = n;
        }
    }
    
    if (seq) {
        printf("verdadeiro");
    }   
    
    return 0;
}