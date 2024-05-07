package Ordenação;
/*
 * 
 * 
ORDENAÇÃO POR INSERÇÃO
ADICIONO UM ELEMENTO
MELHOR JEITO DE FAZER UMA COMPARAÇÃO É DE TRÁS PARA FRENTE
A PRIMEIRA POSIÇÃO 0 SEMPRE ESTÁ ORDENADO
O PIOR CENARIO É QUANDO ESTÁ DESCRECENTE - Complexidade n²
 * 
 */
public class OrdenacaoInsercao {
    public static void main(String[] args) {
        int[] vetor = {50,54,80,62,74,99,61,52,64,89,58};
        imprimir(ordenar(vetor));
        
    }

    public static int[] ordenar(int[] vetor) {
        int size = vetor.length;
    
        for (int a = 1; a < size; a++) {
            int aux = vetor[a];
            int b = a - 1;
            
            while (b >= 0 && vetor[b] > aux) {
                vetor[b + 1] = vetor[b];
                b--;
            }
            
            vetor[b + 1] = aux;
        }
        
        return vetor;
    }
    

    public static void imprimir(int[] vetor){
        for(int i : vetor){
            System.out.println(i);
        }
    }
    
}
