/*
Construa uma estrutura tAluno com número de matrícula, nome (com até 30 caracteres) e curso (com até 30 caracteres), nesta ordem. Leia do usuário as informações de 5 alunos e armazene em vetor dessa estrutura. Em seguida, leia um nome de curso, pesquise e liste todos os alunos (a matrícula e nome) que fazem o curso.
*/

#include <stdio.h>
#include <string.h>

#define TAMV 5
#define MAX 30

struct tAluno {
    int nMatricula;
    char nomeAluno[MAX];
    char curso[MAX];
};

int lerAlunos(tAluno alunos[TAMV]);

int imprimeAlunos(tAluno alunos[TAMV], char curso[MAX]);


int main() {

    tAluno cadastro[TAMV];
    char curso[MAX];

    lerAlunos(cadastro);

    scanf(" %[^\n]s", curso);

    imprimeAlunos(cadastro, curso);
    
    return 0;
}


int lerAlunos(tAluno alunos[TAMV]) {
    int i;

    for (i = 0; i < TAMV; i++){
        scanf("%d", &alunos[i].nMatricula);
        scanf(" %[^\n]s", alunos[i].nomeAluno);
        scanf(" %[^\n]s", alunos[i].curso);
    }

    return 0;
}

int imprimeAlunos(tAluno alunos[TAMV], char curso[MAX]) {
    int i;

    for (i = 0; i < TAMV; i++) {
        if (strcmp(alunos[i].curso, curso) == 0) {
            printf("%d", alunos[i].nMatricula);
            printf(" %s\n", alunos[i].nomeAluno);
        }
    }

    return 0;
}
