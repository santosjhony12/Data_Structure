#include <stdio.h>
#include <stdlib.h> 

struct cel
{
    int conteudo;
    struct cel *seg; //seguinte
};
typedef struct cel celula;

void inserir(celula *lst, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = NULL;
    celula *ultimo = lst;
    while(ultimo->seg != NULL)
    {
        ultimo = ultimo->seg;
    }
    ultimo->seg = novo;

}
void imprimirLista(celula *list){
    celula *p;
    if (list != NULL){
        printf("%d\n", list->conteudo);
        imprimirLista(list->seg);
    }
}
int main()
{
    int vetor[] = {1,2,3,4,5};

    celula *lista;
    lista = malloc(sizeof(celula));
    lista->conteudo = vetor[0];
    lista->seg = NULL; 

    for(int i = 1; i < 5; i++){
        inserir(lista, vetor[i]);
    }
    imprimirLista(lista);
    return 0;
}

