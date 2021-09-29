#include <stdio.h>

double calcSalario(double valorhora, int numHoras);

int main() {
    double valorH, salario;
    int numFuncionario, horas;

    fflush(stdin);
    scanf("%d %lf %d", &numFuncionario, &valorH, &horas);

    salario = calcSalario(valorH, horas);

    printf("%d %d %.2lf %.2lf", numFuncionario, horas, valorH, salario);

    return 0;
}

double calcSalario(double valorhora, int numHoras) {
    double resultado;

    if (numHoras < 40) {
        resultado = valorhora * numHoras;
    }
    else {
        resultado = valorhora * 40;
        
        numHoras -= 40;
        valorhora *= 1.5;

        resultado += valorhora * numHoras;
    }

    return resultado;
}