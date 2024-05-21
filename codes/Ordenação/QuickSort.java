package Ordenação;

// retorna o indice do PIVO
class QuickSort{
    public static void main(String[] args) {
        int[] vetor = {5, 2, 9, 1, 7, 3};
        imprimir(ordenar(0, 5, vetor));
    }

    // MAIOR E MENOR SÃO INDICES
    public static int[] ordenar(int comeco, int fim, int[] array){
        if(comeco < fim){
            int pivo = separar(array, comeco, fim);
            ordenar(comeco, pivo-1, array);
            ordenar(pivo + 1, fim, array);
        }

        return array;
    }

    public static int separar(int[] array, int comeco, int fim){
        int pivo = array[fim];
        int indiceMenorIgual = comeco;

        for(int j = comeco; j < fim; j++){
            if(array[j] <= pivo){
                int aux = array[indiceMenorIgual];
                array[indiceMenorIgual] = array[j];
                array[j] = aux;
                indiceMenorIgual++;
            }
        }

        int aux = array[indiceMenorIgual];
        array[indiceMenorIgual] = array[fim];
        array[fim] = aux;

        return indiceMenorIgual;
    }
    public static void imprimir(int[] vetor){
        for(int i : vetor){
            System.out.println(i);
        }
    }
}
