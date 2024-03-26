#include <stdio.h>
#include <stdlib.h> 

struct cel
{
    int conteudo;
    struct cel *seg;
};
typedef struct cel celula;

void inserir(celula *lst, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
}
void imprimirLista(celula *list){
    celula *p;
    for(p = list; p != NULL; p = p->seg){
        if(!(p->seg == list->seg)){
            printf("%d", p->conteudo);
        }
    }
}
int main()
{
    int vetor[] = {1,2,3,4,5};

    celula *lista;
    lista = malloc(sizeof(celula));
    lista->seg = NULL; 

    for(int i = 0; i < 5; i++){
        inserir(lista, vetor[i]);
    }
    imprimirLista(lista);
    return 0;
}

