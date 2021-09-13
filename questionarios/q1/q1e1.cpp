// Programa: medianotas.cpp
// Programador:
// Data:
// Este programa calcula a m�dia final de um aluno para
// um curso com o total de tr�s provas e dois trabalhos. As
// provas comp�e 75% da nota da prova e os trabalhos 25%.
// Declara��o das bibliotecas utilizadas
#include<stdio.h> // printf, scanf

// inicio da fun��o principal
int main() {
    // Declara��o das Vari�veis locais
    double prova1;            // nota primeira prova
    double prova2;            // nota segunda prova
    double prova3;            // nota terceira prova
    double mediaProvas;       // m�dia das notas das provas
    double trabalho1;         // nota do trabalho 1
    double trabalho2;         // nota do trabalho 2
    double mediaTrabalhos;    // m�dia das notas dos trabalhos
    double mediaFinal;        // porcentagem total da nota

    // Recebe Valores
    printf("Digite as notas: ");
    fflush(stdin);
    scanf("%lf%lf%lf%lf%lf", &prova1, &prova2, &prova3, &trabalho1, &trabalho2);

    mediaProvas = (prova1 + prova2 + prova3) / 3;

    mediaTrabalhos = (trabalho1 + trabalho2) / 2;

    mediaFinal = (mediaProvas * 0.75) + (mediaTrabalhos * 0.25);

    // Imprima os resultados
    printf("======= NOTAS ========\n");
    printf("Primeira Prova    %4.1f\n", prova1);
    printf("Segunda Prova     %4.1f\n", prova2);
    printf("Terceira Prova    %4.1f\n", prova3);
    printf("M�dia Provas      %4.1f\n\n", mediaProvas);
    printf("Primeiro Trabalho %4.1f\n", trabalho1);
    printf("Segundo Trabalho  %4.1f\n", trabalho2);
    printf("M�dia Trabalhos   %4.1f\n", mediaTrabalhos);
    printf("----------------------\n");
    printf("M�dia Final       %4.1f\n", mediaFinal);

   return 0;

} // fim da fun��o principal
