#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int dado;
    struct fila *prox; 
} fila;

void inserir(int x, fila **fim, fila **inicio) {
    fila *nova = malloc(sizeof(fila));
    nova->dado = x;
    nova->prox = NULL;

    if (*fim == NULL) {
        *inicio = nova;
    } else {
        (*fim)->prox = nova;
    }
    *fim = nova;
}

int remover(fila **inicio, fila **fim) {
    if(*inicio != NULL){
        fila *lixo = *inicio;
        *inicio = (*inicio)->prox;
        int x = lixo->dado;
        if(*inicio == *fim){
            (*fim) = NULL;
        }
        free(lixo);
        return x;
    }  
}

void imprimirLista(fila *list) {
    fila *p = list;
    while (p != NULL) {
        printf("%d\n", p->dado);
        p = p->prox;
    }
}

int main() {
    fila *inicio = NULL;
    fila *fim = NULL;

    inserir(8, &fim, &inicio);
    inserir(9, &fim, &inicio);
    inserir(10, &fim, &inicio);

    imprimirLista(inicio);

    printf("Removendo o elemento: %d\n", remover(&inicio, &fim));
    printf("Lista sem o elemento:\n");
    imprimirLista(inicio);

    printf("Removendo o elemento: %d\n", remover(&inicio, &fim));
    printf("Lista sem o elemento:\n");
    imprimirLista(inicio);

    printf("Removendo o elemento: %d\n", remover(&inicio, &fim));
    printf("Lista sem o elemento:\n");
    imprimirLista(inicio);

    inserir(11, &fim, &inicio);
    inserir(12, &fim, &inicio);
    inserir(13, &fim, &inicio);

    imprimirLista(inicio);

    return 0;
}
