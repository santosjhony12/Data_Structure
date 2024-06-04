#include <stdio.h>
#include <stdlib.h>
// e-r-d = esquerda raiz direita
// Varreadura subarvore esquerda até ser nulo
// raiz 
// subarvore direita

// menor para a esquerda
// maior para direita

// a remoção, só remove da raiz
// um passo pra esquerda e tudo para a direita
// troca as posições

typedef struct no{
    int conteudo;
    struct cel *esq;
    struct cel *dir;
} arvore;

void Erd(arvore *r){
    if(r != NULL){
        Erd(r->esq);
        printf("%d\n", r->conteudo);
        Erd(r->dir);
    }
}

arvore *criar(int x){
    arvore *novo = malloc(sizeof(arvore));
    novo->conteudo = x;
    novo->dir = NULL;
    novo->esq = NULL;
    return novo;
}

arvore *verificar(arvore *raiz, int x){
    if(raiz == NULL){
        return NULL;
    }
    if(x < raiz->conteudo && raiz->esq == NULL){
        return raiz;
    }

    if(x >= raiz->conteudo && raiz->dir == NULL){
        return raiz;
    }

    if(x < raiz->conteudo){
        return verificar(raiz->esq, x);
    }else{
        return verificar(raiz->dir, x);
    }

}
void adicionar(int x, arvore *raiz){
    arvore *local = verificar(raiz, x);
    if(x < local->conteudo){
        local->esq = criar(x);
    }else{
        local->dir = criar(x);
    }
}
arvore *buscarRaiz(int x, arvore *raiz){
    if(raiz == NULL || raiz->conteudo == x){
        return raiz;
    }
    if(x < raiz->conteudo){
        return buscarRaiz(x, raiz->esq);
    }
    if(x > raiz->conteudo){
        return buscarRaiz(x, raiz->dir);
    }
}
arvore* encontrar_menor_esquerdo(arvore* raiz) {
    while (raiz->esq != NULL) {
        raiz = raiz->esq;
    }
    return raiz;
}

arvore *remover(arvore *raiz, int x){

    if(raiz == NULL){
        return raiz;
    }

    if(x < raiz->conteudo){
        raiz->esq = remover(raiz->esq, x);
    }
    else if(x > raiz->conteudo){
        raiz->dir = remover(raiz->dir, x);
    }
    else{
        if(raiz->esq == NULL){
            arvore *temp = raiz->dir;
            free(raiz);
            return temp;
        }else if(raiz->dir == NULL){
            arvore *temp = raiz->esq;
            free(raiz);
            return temp;
        }

        arvore *temp = encontrar_menor_esquerdo(raiz->dir);
        raiz->conteudo = temp->conteudo;
        raiz->dir = remover(raiz->dir, temp->conteudo);
    }
    return raiz;
    
}
int main(){
    arvore *raiz = criar(16);
    adicionar(10, raiz);
    adicionar(25, raiz);
    adicionar(7, raiz);
    adicionar(6, raiz);
    adicionar(5, raiz);

    Erd(raiz);

    raiz = remover(raiz, 7);
    printf("Removido o elemento 7:\n");
    Erd(raiz);

    raiz = remover(raiz, 16);
    printf("Removido o elemento 16:\n");
    Erd(raiz);
    return 0;
}