// PILHAS - EMPILHAMENTO E DESIMPELHAMENTO - POP (EXCLUSÃO), PUSH (ADD), PIP - VER O VALOR DO ULTIMO ELEMENTO DA PILHA

#include <stdio.h>
#include <stdlib.h>

//COLOCO O TYPE DEF PRA NOMEAR ELA
typedef struct lista
{
    int dado;//tipo
    struct lista *prox; // elemento que aponta para o proximo
    
} celula;

void imprimir();
void push(int);
void pop();

celula *top = NULL;

int main(){

    int n, opcao;
    return 0;
}

void push(int item){
    printf("\n==================================");
    printf("\n===========EMPILHANDO=============");
    celula *novo = malloc(sizeof(celula)); // NOVO BLOCO DE MEMÓRIA É ALOCADO DINAMICAMENTE USANDO A FUNÇÃO MALLOC PARA ARMAZENAR UM NOVO ELEMENTO NA PILHA
    novo->dado = item; // dado é membro da estrutura celula apontada por novo
    novo->prox = top;
    top = novo;
    printf("\nValor %d empilhado ", novo->dado);
    printf("\n==================================");
}

void pop(){
    printf("\n==================================");
    printf("\n===========DESEMPILHANDO=============");
    if(top == NULL){ //se o ultimo elemento for NULL então a pilha está vazia
        printf("\n\nA pilha está vazia");
    }
    else
    {
        celula *temp;
        temp = top;
        top = top->prox;
        printf("\n\n%d desempilhando", temp->dado);
        free(temp); // a gente libera a variavel
    }
    printf("\n==================================");
}

void imprimir()
{
    celula *temp;
    temp = top;
    printf("\n==================================");
    printf("\n===========IMPRIMINDO PILHA=============");
    while(temp != NULL)
    {
        printf("\n%d", temp->dado);
        temp = temp->prox;
    }
    printf("\n==================================");
}