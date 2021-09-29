#include <stdio.h>

int ciclo (int n);

int main() {
    int n;

    fflush(stdin);
    scanf("%d", &n);

    printf("%d", ciclo(n));

    return 0;
}


int ciclo (int n) {
    int count = 0;

    count += 1;

    printf("%d ", n);
    
    if (n > 1){
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = (n * 3) + 1;
        }
        count += ciclo(n);
    }

    return count;
}