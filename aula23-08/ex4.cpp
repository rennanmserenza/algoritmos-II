/* Recebe duas datas (dd/mm/aaaa) e calcula o numero de dias decorridos entre elas*/
#include <stdio.h>
#include <math.h>   /* floor (x) - calcula o piso do número x,
						abs(x) - calcula o valor absoluto de x*/

// definição de um tipo estrutura/registro/struct
struct tipoData {
	int dia, mes, ano;
};

int fAno(int ano, int mes) {

    if(mes <= 2) {
       ano--;
    }

    return ano;
}

int gMes(int mes) {

    int g;

    if(mes <= 2) {
        g = mes + 13;
    }
    else {
        g = mes + 1;
    }
    return g;
}

int calculaN(tipoData data) {

    int N;

    N = ((1461 * fAno(data.ano, data.mes)) / 4) + ((153 * gMes(data.mes)) / 5) + data.dia;

    return N;
}

int main() {

    int dif, D1, D2;

    char semana[7][15] = {
        "Domingo",
        "Segunda-Feira",
        "Terca-Feira",
        "Quarta-Feira",
        "Quinta-Feira",
        "Sexta-Feira",
        "Sabado"};

    tipoData data1, data2;



	printf("Informe a primeira data (dd/mm/aa): ");
	fflush(stdin);
	scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

	printf("Informe a segunda data (dd/mm/aa): ");
	fflush(stdin);
	scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

	dif = abs(calculaN(data2) - calculaN(data1));

	printf("\nA diferenca em dias entre as datas informada e de %d dias.\n", dif);

	D1 = (calculaN(data1) - 621049) % 7;
	D2 = (calculaN(data2) - 621049) % 7;

	printf("\nO dia da semana da primeira data informada e: %s", semana[D1]);
    printf("\nO dia da semana da segunda data informada e: %s\n", semana[D2]);

	return 0;
}
