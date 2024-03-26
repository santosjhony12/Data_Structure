#include <stdio.h>
#include <stdlib.h> 
// CRIAR UM MÉTODO PARA O PRIMEIRO ELEMENTO E PARA OS DEMAIS
struct cel
{
    int conteudo;
    struct cel *seg; // Próximo
};
typedef struct cel celula;

void inserir(celula *lst, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula));
    novo->conteudo = x;
    novo->seg = NULL;
    celula *temp;
    temp->seg = novo;

}

void imprimirLista(celula *list)
{
    celula *p = list;
    while(p->seg != NULL){
        printf("%d\n", p->conteudo);
        p = p->seg;
    }
}

int main()
{
    int vetor[] = {1, 2, 3, 4, 5};

    celula *lista;
    lista = malloc(sizeof(celula));
    lista->seg = NULL;

    for (int i = 0; i < 5; i++)
    {
        inserir(lista, vetor[i]);
    }

    imprimirLista(lista);

    return 0;
}
