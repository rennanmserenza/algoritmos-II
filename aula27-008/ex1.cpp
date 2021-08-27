/*Faca um programa que leia um vetor com os dados de N (N <= 10)livros: 
titulo (maximo de 30 letras), autor (maximo de 30 letras) e ano. Leia um valor P e 
mostre as informacoes de todos os livros com ano abaixo de P. Repita esta consulta
 ate que seja lido um valor P = 0 seja informado. 

- Crie uma funcao para fazer a leitura dos N livros, armazenando-os em um vetor de 
registros. A funcao deve receber como parametro o valor de N e o vetor para armazenar
os dados.

- Crie uma funcao para fazer a listagem dos livros com ano menor que P.*/

#include <stdio.h>
#include <locale.h>

// constantes
#define TAM 10
#define MAX 30

// definicao de tipos
struct tLivro
{
	char titulo[MAX], autor[MAX];
	int ano;
};

void leitura(tLivro vetor[TAM], int n);

void listagem(tLivro vetor[TAM], int n, int P);

// funcao principal
int main()
{
    int n, p;
    tLivro colection[TAM];

    setlocale(LC_ALL, "Portugese");

    printf("Quantos livros vamos cadastrar? ");
    fflush(stdin);
    scanf("%d", &n);

    leitura(colection, n);

    do{
        printf("\nPor que ano deseja pesquisar? ");
        fflush(stdin);
        scanf("%d", &p);
    
        if(p != 0)
            listagem(colection, n, p); 

    }while (p != 0);
    
    
	return 0;
}

void leitura(tLivro vetor[TAM], int n) {
    int i;

    for(i=0; i < n; i++) {
        printf("\nDigite o titulo do livro: ");
        fflush(stdin);
        scanf("%[^\n]", vetor[i].titulo);
        
        printf("Digite o nome do autor: ");
        fflush(stdin);
        scanf("%[^\n]", vetor[i].autor);

        printf("Digite o ano que o livro foi escrito: ");
        fflush(stdin);
        scanf("%d", &vetor[i].ano);
    }

}

void listagem(tLivro vetor[TAM], int n, int P) {
    
    int i;

    printf("\nListagem dos livros!");
    printf("\nTitulo\t\tAutor\t\tAno");

    
        for(i=0; i < n; i++){
            if (P <= vetor[i].ano){
                printf("\n%s%s%d", vetor[i].titulo, vetor[i].autor, vetor[i].ano);        
            } else {
                printf("\nNenhum livro cadastrado a partir desse ano!!");
            }
        }

    printf("\n");
}