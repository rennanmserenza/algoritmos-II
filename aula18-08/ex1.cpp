#include <stdio.h>
#include <locale.h>
#define MAX 50

// prototipo
void calcula_max_min(float vet[MAX], int n, float &ind_max, float &ind_min);

int main()
{
    setlocale(LC_ALL, "Portuguese");

	float notas[MAX];

	int n, i;
	float maior, menor;

	printf("Digite a quantidade de notas: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
	    fflush(stdin);
		scanf("%f", &notas[i]);
	}

	// chamada da função
    calcula_max_min(notas, n, maior, menor);

	// resultado - saída
    printf("\nA maior nota é %.1f, e a menor nota é %.1f", maior, menor);

    return 0;
}

void calcula_max_min(float vet[MAX], int n, float &ind_max, float &ind_min)
{
    int i;

    for(i = 0; i < n; i++)
    {
        if (i == 0)
        {
            ind_max = vet[i];
            ind_min = vet[i];
        }
        else
        {
            if (vet[i] > ind_max)
            {
                ind_max = vet[i];
            }
            else if (vet[i] < ind_min)
            {
                ind_min = vet[i];
            }
        }
    }
}
