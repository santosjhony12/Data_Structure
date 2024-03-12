
#include <stdio.h>
// O ponteiro aponta para o endereço da variavel (retorna o conteúdo da variavel )- independente da mudança de conteúdo
// Todo Ponteiro possui 4 bytes.

int main()
{
    int a = 10;
    int b = 30;
    int *p; // Declaração de um ponteiro
    p = &a; // Passo o endereço de A para o conteúdo de p


    printf("%d\n",a); // 10
    printf("%p\n", &a);//Endereço de A
    printf("%p\n", p); //Endereço de A
    printf("%d\n", *p); // 10
    printf("%p\n", &p); //Endereço de P
    //PONTEIRO DE PONTEIRO 
    int **pp;
    pp = NULL;

    

    char c = 'h';
    char *pc = &c;
    return 0;

}
int soma(int A, int B){
    return A+B;
}

void sub(int *pa, int *pb){
    *pa = *pa - *pb;
}