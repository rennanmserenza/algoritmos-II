/*
Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa e:
• Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em kW) e tempo ativo por dia (real, em horas).
• Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo. Apresente este último dado em porcentagem.

Dica: utilize %.2f para impressão dos valores reais com duas casas decimais.
*/

#include <stdio.h>
#define TAMV 5
#define MAX 15

struct tipoAparelho {
    char nome[MAX];
    double potencia;
    double horasConsumo;
};

int lerAparelhos(tipoAparelho aparelho[TAMV]);

int consumoTotal(tipoAparelho aparelho[TAMV], int dias);

int main() {

    int t;
    tipoAparelho casa[TAMV];

    lerAparelhos(casa);

    fflush(stdin);
    scanf("%d", &t);

    consumoTotal(casa, t);
}


int lerAparelhos(tipoAparelho aparelho[TAMV]) {
    int i;

    for (i = 0; i < TAMV; i++){
        scanf(" %[^\n]s", aparelho[i].nome);
        scanf(" %lf", &aparelho[i].potencia);
        scanf(" %lf", &aparelho[i].horasConsumo);
    }

    return 0;
}

int consumoTotal(tipoAparelho aparelho[TAMV], int dias) {
    int i;
    double consumoTotal = 0;
    double consumoTotAparelho, consumoRelativo;

    for (i = 0; i < TAMV; i++) {
        consumoTotal += (aparelho[i].potencia * aparelho[i].horasConsumo) * dias;
    }

    printf("%.2f\n", consumoTotal);

    for (i = 0; i < TAMV; i++) {
        
        consumoTotAparelho = 0;
        consumoTotAparelho = (aparelho[i].potencia * aparelho[i].horasConsumo) * dias;

        consumoRelativo = ((consumoTotAparelho * 100) / consumoTotal);
        printf("%.2f\n", consumoRelativo);
    }

    return 0;
}