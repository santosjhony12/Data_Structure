package Ordenação;

class MergeSort{
    public static void main(String[] args) {
        int[] array = {39, 20, 40, 70, 24, 60, 30};
        imprimir(ordena(array, 0, 6));
        
    }
    public static int[] ordena(int[]array, int indiceInicio, int indiceFim) {
        
        if(indiceInicio<indiceFim){
            int elementoMeio = (indiceFim+indiceInicio)/2;
            ordena(array, indiceInicio, elementoMeio);
            ordena(array, elementoMeio+1, indiceFim);
            merge(array, indiceInicio, indiceFim, elementoMeio);
        }
        
        return array;
        
    }
    public static int[] merge(int[] array, int inicio, int fim, int meio){
        int tamanhoEsquerdo = meio - inicio + 1;
        int tamanhoDireito = fim - meio;

        int[] arrayEsquerda = new int[tamanhoEsquerdo];
        int[] arrayDireita = new int[tamanhoDireito];

        for(int i = 0; i < tamanhoEsquerdo; i++){
            arrayEsquerda[i] = array[inicio+i];
        }
        for(int i = 0; i < tamanhoDireito; i++){
            arrayDireita[i] = array[meio+i+1];
        }
        int indiceInicialEsquerdo = 0;
        int indiceInicialDireito = 0;
        int indiceInicialArrayMergeado = inicio;


        while(indiceInicialEsquerdo < tamanhoEsquerdo && indiceInicialDireito < tamanhoDireito ){
            if(arrayEsquerda[indiceInicialEsquerdo] <= arrayDireita[indiceInicialDireito]){
                array[indiceInicialArrayMergeado] = arrayEsquerda[indiceInicialEsquerdo];
                indiceInicialEsquerdo ++;
            }else{
                array[indiceInicialArrayMergeado] = arrayDireita[indiceInicialDireito];
                indiceInicialDireito ++;
            }
            indiceInicialArrayMergeado++;
        }

        while(indiceInicialDireito < tamanhoDireito){
            array[indiceInicialArrayMergeado] = arrayDireita[indiceInicialDireito];
            indiceInicialDireito ++;
            indiceInicialArrayMergeado ++;
        }

        while(indiceInicialEsquerdo < tamanhoEsquerdo){
            array[indiceInicialArrayMergeado] = arrayEsquerda[indiceInicialEsquerdo];
            indiceInicialEsquerdo ++;
            indiceInicialArrayMergeado ++;
        }

        return array;
    }

    public static void imprimir(int[] vetor){
        for(int i : vetor){
            System.out.println(i);
        }
    }

}