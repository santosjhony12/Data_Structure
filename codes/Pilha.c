#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int dado;
    struct pilha *prox;
} pilha;

void empilhar(int x, pilha *topo) { 
    pilha *novo = malloc(sizeof(pilha));
    novo->dado = x;
    novo->prox = topo->prox; // Alterando o valor de topo
    topo->prox = novo; // Atualizando o valor de topo
}

int desempilha(pilha *topo) {
    pilha *lixo = topo->prox;
    int x = lixo->dado;
    topo->prox = lixo->prox;
    free(lixo);
    return x;
}

void imprimirPilha(pilha *list){
    pilha *p;
    for(p = list->prox; p != NULL; p = p->prox){
        printf("%d\n", p->dado);
    }
}

int pilhaVazia(pilha *topo) {
    return topo == NULL;
}
pilha *criarCabeca(){
    pilha *cabeca = malloc(sizeof(pilha));
    cabeca->prox = NULL;
    return cabeca;
}
int main() {
    pilha *topo = criarCabeca();

    printf("Pilha vazia? 1 - SIM | 0 - NÃO |\nRESPOSTA: %d\n\n", pilhaVazia(topo));

    printf("Empilhando 1, 2, e 3...\n\n");
    empilhar(1, topo);
    empilhar(2, topo);
    empilhar(3, topo);

    printf("Pilha vazia? 1 - SIM | 0 - NÃO |\nRESPOSTA: %d\n\n", pilhaVazia(topo));

    imprimirPilha(topo);

    printf("Desempilhando o %d\n", desempilha(topo));
    imprimirPilha(topo);

    printf("Desempilhando o %d\n", desempilha(topo));
    imprimirPilha(topo);
    printf("Desempilhando o %d\n", desempilha(topo));
    imprimirPilha(topo);

    printf("Pilha vazia? 1 - SIM | 0 - NÃO |\nRESPOSTA: %d\n\n", pilhaVazia(topo));

    return 0;
}
