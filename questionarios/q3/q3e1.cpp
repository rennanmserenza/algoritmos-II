#include <stdio.h>
#include <string.h>

#define MAX 15

void mediaAR(float media, float notaAP, char mensagem[MAX]);

int main() {
    float notaAP, media;
    char mensagem[MAX], reprovado[MAX] = "Reprovado", aprovado[MAX] = "Aprovado";
    
    fflush(stdin);
    scanf("%f %f", &notaAP, &media);

    if (media >= notaAP) {
        strcpy(mensagem, aprovado);
    }
    else {
        strcpy(mensagem, reprovado);
    }

    mediaAR(media, notaAP, mensagem);

    return 0;
}

void mediaAR(float media, float notaAP, char mensagem[MAX]) {
    
    printf("%.1f %s", media, mensagem);

}