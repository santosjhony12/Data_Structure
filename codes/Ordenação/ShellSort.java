package Ordenação;
/*
 * 
 * complexidade varia de acordo com o GAP
 * GAP: 4, 2, 1.
 */
public class ShellSort {
    public static void main(String[] args) {
        int[] array = {52,54,80,62,74,99,61,50,64,89,58};
        imprimir(ordenar(array));
    }

    public static int[] ordenar(int[] array){
        int size = array.length;
        int gap = 4;

        while(gap>0){
            for(int a = gap; a < size; a++){
                int aux = array[a];
                int b = a; // utilizamos para percorrer os elementos anteriores
    
                while(b >= gap && array[b - gap] > aux){ // comparo com os elementos que estão atrás do gap
                    array[b] = array[b - gap];
                    b-= gap; // movemos os maiores para frente do array, abrindo espaço para o aux "empurrando"
                }
                array[b] = aux; // colocamos o aux no lugar correto. 
            }
            gap /= 2;
        }
        return array;
    }

    public static void imprimir(int[] vetor){
        for(int i : vetor){
            System.out.println(i);
        }
    }
}
