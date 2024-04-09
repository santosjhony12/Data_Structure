#include <stdio.h>
#include <stdlib.h> 
// CRIAR UM MÉTODO PARA O PRIMEIRO ELEMENTO E CRIAR OUTRO METODO PARA OS DEMAIS
// UM MÉTODO SEM CABEÇA É QUANDO EU JÁ UTILIZO O PRIMEIRO ELEMENTO, ENQUANTO A COM CABEÇA EU USO EXCLUSIVAMENTE O "PRIMEIRO ELEMENTO" PARA APONTAR O PRÓXIMO ELEMENTO
struct cel
{
    int conteudo;
    struct cel *seg; // Próximo
};
typedef struct cel celula;

celula *inserirPrimeiroElmento(celula *prox, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = prox;
    return novo;
}

void inserir(celula *lst, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
}
void imprimirLista(celula *list)
{
    celula *p = list;
    while(p->seg != NULL){
        printf("%d\n", p->conteudo);
        p = p->seg;
    }
}
void inserirUmElementoEmPrimeiroPosicao(celula **lst, int x){
    celula *nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->seg = *lst;
    *lst = nova;
}

celula *buscarAnterior(celula *lista, int x){
    celula *p = lista;
    while(p->seg != NULL && p->seg->conteudo != x){
        p = p->seg;
    }
    return p;
}

int removerPrimeiroElemento(celula **lst){
    celula *lixo = *lst;
    int x = lixo->conteudo;
    *lst = lixo->seg;
    free(lixo);
    
    return x;
}
int main()
{
    int vetor[] = {1, 2, 3, 4, 5};

    celula *lista;
    lista = inserirPrimeiroElmento(lista, vetor[0]);
    for(int i = 1; i<5; i++){
        inserir(lista, vetor[i]);
    }
    printf("Imprimindo a lista sem adicionar o 8\n");
    imprimirLista(lista);

    celula **pl = &lista;
   inserirUmElementoEmPrimeiroPosicao(pl, 8);

    printf("Imprimindo a lista com o 8 adicionado\n");
    imprimirLista(lista);

    
    printf("Imprimindo depois de eliminar o %d\n", removerPrimeiroElemento(&lista));
    imprimirLista(lista);
    return 0;
}
