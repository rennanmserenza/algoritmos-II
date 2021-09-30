#include <stdio.h>
#define MAX 20

struct tipoA{
	char nome[MAX+1];
	float op1, op2;
};

int notaMaior(int n, tipoA *v);

int buscaNota(int n, tipoA *v);


int main()
{
	int n, indice_aluno;
    tipoA alunos[MAX];

	// leitura de n
	scanf("%d", &n);

	// leitura do vetor
	for(int i = 0; i < n; i++) {
        scanf(" %s %f %f", alunos[i].nome, &alunos[i].op1, &alunos[i].op2);
	}    

	// chamada da funcao para calcular a maior nota e listar os alunos com tal nota
	notaMaior(n, alunos);

	// chamada da funcao para verificar aluno que obteve zero nas  2 optativas
    indice_aluno = buscaNota(n, alunos);
    
    if (indice_aluno == -1) {
        printf("\nInexistente");
    }
    else {
        printf("\n%s", alunos[indice_aluno].nome);
    }

	return 0;
}


// CORPO DAS FUNCOES
int notaMaior(int n, tipoA *v) {
    int i;
    float maior = 0;

    for (i = 0; i < n; i++) {
        if (i == 0) {
            maior = v[i].op1;
        }
        else {
            if (v[i].op1 > maior) {
                maior = v[i].op1;
            }
        }            
    }

    printf("%.1f ", maior);

    for (i = 0; i < n; i++) {
        if (v[i].op1 == maior) {
            printf("%s ", v[i].nome);
        }
    }

    return 0;
}

int buscaNota(int n, tipoA *v) {
    int i;

    for (i = 0; i < n; i++) {
        if (v[i].op1 == 0.0 && v[i].op2 == 0.0) {
            return i;
        }
    }

    return -1;
}

// CORPO DAS FUNCOES

/*
	int x, y, *p;
    
    printf("%d %d\n", x, y);
    y = 1;
    printf("%d %d\n", x, y);
    p = &y;
    printf("%d %d\n", x, y);
    x = *p;
    printf("%d %d\n", x, y);
    x = 3;
    printf("%d %d\n", x, y);
    (*p)++;
    printf("%d %d\n", x, y);
    --x;
    printf("%d %d\n", x, y);
    p = &x;
    printf("%d %d\n", x, y);
    (*p) = (*p) - 3*y;
    printf("%d %d\n", x, y);
    printf("%d", (x - y)); 
    */

/*
int A(int m, int n) {
    
    if (m == 0) {
        return n + 1;
    }
    else if (n == 0) {
        printf("x");
        return A(m - 1, 1);
    }
    else {
        printf("x");
        return A(m - 1, A(m, n - 1));
    }

}
*/