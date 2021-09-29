/*
    Faça um programa para simular uma agenda de compromissos e:
        • Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e data, nesta ordem. A data deve ser outra estrutura de dados contendo dia, mês e ano. 
        • Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o procedimento até ler M = 0.
    Dica: utilize  scanf("%d/%d/%d", &variavel_dia, &variavel_mes, &variavel_ano); para leitura formatada da data.
*/

#include <stdio.h>
#define TAM 5
#define MAX 60

struct tipoData {
	int dia, mes, ano;
};

struct tipoAgenda {
    char compromisso[MAX];
    tipoData data;
};

void lerCompromisso(tipoAgenda agenda[TAM]);

void imprimeCompromisso(tipoAgenda agenda[TAM], int M, int A);

void listarCompromisso(tipoAgenda agenda[TAM]);


int main() {    
    
    tipoAgenda agenda[TAM];
    
    lerCompromisso(agenda);

    listarCompromisso(agenda);

    return 0;
}


void lerCompromisso(tipoAgenda agenda[TAM]) {
    int i;

    for (i = 0; i < TAM; i++){
        scanf("%s", agenda[i].compromisso);

        scanf("%d/%d/%d",   &agenda[i].data.dia,
                            &agenda[i].data.mes,
                            &agenda[i].data.ano);   
    }
}

void imprimeCompromisso(tipoAgenda agenda[TAM], int M, int A) {
    int i;

    for (i = 0; i < TAM; i++){
        if (agenda[i].data.mes == M && agenda[i].data.ano == A) {
            printf("%s\n", agenda[i].compromisso);
        }
    }
}

void listarCompromisso(tipoAgenda agenda[TAM]) {

    int mes, ano;

    do{

        fflush(stdin);
        scanf("%d/%d", &mes, &ano);

        if (mes != 0 && ano != 0) {
            imprimeCompromisso(agenda, mes, ano);
        }

    }while (mes != 0 && ano != 0);
}
