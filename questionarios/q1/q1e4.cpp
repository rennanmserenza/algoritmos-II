#include <stdio.h>
#include <math.h>

int equacao(double a, double b, double c);

int main() {
    double x, y, z;

    fflush(stdin);
    scanf("%lf %lf %lf", &x, &y, &z);

    equacao(x, y, z);

    return 0;
}

int equacao(double a, double b, double c) {
    double delta, raiz, r1, r2;

    delta = (b * b) - (4 * a * c);
    raiz = sqrt(delta);

    r1 = (-b - raiz) / (2 * a);
    r2 = (-b + raiz) / (2 * a);
    
    if(delta >= 0){
        printf("%5.2lf, %5.2lf", r1, r2);
    }
    else{
        printf("A equação não possui raízes reais");
    }
    return 0;
}