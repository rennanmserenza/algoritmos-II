#include <stdio.h>
#include <stdlib.h>


struct celula {
    int chave;
    struct celula *prox;
};

void imprime_lista(celula *lst);

int main() {
    
    int count = 0;
    celula *lista;
    
    lista = NULL;

}

void imprime_lista(celula *lst) {
    celula *p;

    for (p = lst; p != NULL; p = p->prox) {
        printf("%d", p->chave);
    }
    
}