/*Programa lê duas matrizes A e B de dimensões mxn e calcula a matriz resultante da
soma de A e B*/
#include<stdio.h>
#include<locale.h>
#define MAX 10

/*protótipo das funções*/
void leitura(int M[MAX][MAX], int m, int n);
void impressao(int M[MAX][MAX], int m, int n);
void soma(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n);

/*Função principal*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

	int m,	// número de linhas
		n;	// número de colunas


	printf("Digite a quantidade que terá de linhas e colunas: ");
	scanf("%d%d", &m,&n);

	// leitura da matriz A
	printf("\nDigite os valores da Matriz A\n");
    leitura(A, m, n);

    // leitura da matriz B
    printf("\nDigite os valores da Matriz B\n");
    leitura(B, m, n);

    // Soma da matriz A + B
    soma(A, B, C, m, n);

	// impressao da matriz resultante
	printf("\nResultado da soma da Matriz A com a Matriz B\n");
    impressao(C, m, n);

	return 0;
}

/*Função para armazenar dados na matriz inteira M de dimensoes m por n*/
void leitura(int M[MAX][MAX], int m, int n)
{
    int i, j, num;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Digite o valor que da linha %d coluna %d: ", i, j);

            fflush(stdin);
            scanf("%d", &num);

            M[i][j] = num;
        }
        printf("\n");
    }
}
/*Função para imprimir as células da matriz inteira M de dimensoes m por n*/
void impressao(int M[MAX][MAX], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}
/*Função calcula a soma das matrizes A e B de dimensões mxn e armazena o resultado
na matriz C*/
void soma(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int m, int n)
{
    int i, j, num;

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
