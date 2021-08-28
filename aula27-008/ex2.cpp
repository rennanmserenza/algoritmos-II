/*Faca um programa para cadastrar carros com os seguintes dados: 
marca (maximo de 15 letras), ano e preço. Suponha que no maximo serao cadastrados
30 carros. O seu programa deve possuir o seguinte menu:

1 - Cadastrar um carro: nesta opcao o usuario informa os dados de APENAS UM CARRO, que 
deverão ser armazenados num vetor de registros.

2 - Listar carros: lista os dados de todos os carros cadastrados

3 - Media de precos: calcula e imprime a media dos precos dos carros de um determinado
ano. O usuario informa um ano e a media dos precos dos carros deste ano
deve ser impressa.

FUNCOES A CRIAR:
1 - Uma funcao para cadastrar um carro: recebe o vetor e o numero de carros cadastrados 
ate o momento. Atencao: nesta funcao o numero de carros deverá aumentar em uma unidade.
2 - Uma funcao para listar os dados de todos os carros: recebe o vetor e o numero de carros
cadastrados ate o momento
3 - Uma funcao para calcular e retornar a media dos precos dos carros de um determinado ano 
informado pelo usuario: recebe o vetor, o numero de carros
cadastrados ate o momento e um ano, retorna a media.
*/

#include <stdio.h>
#include <string.h>

#define MAX 15
#define TAM 30

struct tCarro
{
	char marca[MAX];
	int ano;
	float preco;
};

/*prototipo das funcoes*/
void menu();

void lerCarro(tCarro vetor[TAM], int &n);

void listaCarro(tCarro vetor[TAM], int n);

double calcMedia(tCarro vetor[TAM], int n, int ano);

// funcao principal
int main()
{
	// declaracao de variaveis
	int opcao, ano;
    int n = 0; // cadastro de carros.
    double media;
    tCarro catalogo[n];

	do{
		menu();

        fflush(stdin);
		scanf("%d", &opcao);

		if(opcao == 1)
		{
			lerCarro(catalogo, n);
		}
		else if(opcao == 2)
		{
			listaCarro(catalogo, n);
		}
		else if(opcao == 3)
		{
            printf("\nDigite o ano que deseja buscar a media: ");
            fflush(stdin);
            scanf("%d", &ano);

            media = calcMedia(catalogo, n, ano);
            if (media == 0.0) {
                printf("Nenhum Carro foi encontrado neste ano.");
            }
            else {
                printf("Media dos precos: %.2f", media);
            }
            
		}
	}while(opcao != 4);

	return 0;
}

void menu()
{
	printf("\n[1] Cadastrar um carro");
	printf("\n[2] Listar carros");
	printf("\n[3] Media de precos de um ano");
	printf("\nOpcao: ");
}

void lerCarro(tCarro vetor[TAM], int &n) {

    printf("\nQual a marca deste modelo: ");
        fflush(stdin);
        scanf("%[^\n]", vetor[n].marca);
        
        printf("Qual o ano deste modelo: ");
        fflush(stdin);
        scanf("%d", &vetor[n].ano);

        printf("Qual o valor deste modelo: ");
        fflush(stdin);
        scanf("%f", &vetor[n].preco);

        n++;
}

void listaCarro(tCarro vetor[TAM], int n) {

    int i;

    printf("Lista de Carros: \n");
    for(i = 0; i < n; i++) {
        printf("%s %d %.2f\n", vetor[i].marca, vetor[i].ano, vetor[i].preco);
    }
}

double calcMedia(tCarro vetor[TAM], int n, int ano) {
    double soma = 0;
    int i, cont = 0;

    for(i = 0; i < n; i++) {
        if(vetor[i].ano == ano) {
            soma += vetor[i].preco;
            cont += 1;
        }
    }

    if(cont == 0) {
        return 0.0;
    }
    else {
        return soma/cont;
    }
}