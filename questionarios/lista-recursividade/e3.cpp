#include <stdio.h>

int mdc(int a, int b);

int main() {
    int a, b;

    fflush(stdin);
    scanf("%d %d", &a, &b);

    printf("%d", mdc(a, b));
}

int mdc(int a, int b){
    int r;

    r = a % b;

    if (r == 0) {
        return b;
    }
    else {
        return mdc(b, r);
    }
}