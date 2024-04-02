#include <stdio.h>
#include <stdlib.h> 

struct cel
{
    int conteudo;
    struct cel *seg;
};
typedef struct cel celula;
celula *criarCabeca(){
    celula *lista = malloc(sizeof(celula));
    lista->seg = NULL;
    return lista;
}

void inserir(celula *lst, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = NULL;

    celula *temp = lst;

    while(temp->seg != NULL){
        temp = temp->seg;
    }
    temp->seg = novo;
}
celula *inserirAntes(celula *lst, int x){
    celula *novo = lst->seg;
}
void imprimirLista(celula *list){
    celula *p;
    for(p = list->seg; p != NULL; p = p->seg){
        printf("%d\n", p->conteudo);
    }
}
int main()
{
    int vetor[] = {1,2,3,4,5};

    celula *lista;
    lista = criarCabeca();

    for(int i = 0; i < 5; i++){
        inserir(lista, vetor[i]);
    }
    imprimirLista(lista);
    return 0;
}

