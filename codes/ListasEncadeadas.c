#include <stdio.h>
#include <stdlib.h> 

// Células são um novo tipo de dados
struct cel
{
    int conteudo;
    struct cel *seg;
};
typedef struct cel celula;
//PROTOTIPO DO METODO
// QUANDO EU COLOCO UM * DO LADO DA ASSINATURA DO METODO EU ESTOU DIZENDO QUE IRÁ RETORNAR UM PONTEIRO
void insere(celula *lst, int x)
{
    celula *novo;
    novo = malloc(sizeof(celula)); // instanciei 
    novo->conteudo = x;
    novo->seg = lst->seg;
    lst->seg = novo;
}
/* 
celula c; 
celula *p;
Conteúdo da célula - c.conteudo ou p->conteudo
*/
int main(int argc, char const *argv[])
{   
    /*celula c1;
    c1.conteudo = 90; 
    c1.seg = NULL;

    celula c2;
    c2.conteudo = 40;
    c2.seg = NULL;

    c1.seg = &c2;*/

    celula *lista;
    lista = NULL; // BOA PRATICA
    insere(lista, 30);
    insere(lista, 40);
    insere(lista, 90);
    printf("%d\n",lista->conteudo);
    return 0;
}

