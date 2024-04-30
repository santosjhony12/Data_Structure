package Ordenação;

public class OrdenacaoInsercao {
    public static void main(String[] args) {
        int[] vetor = {50,54,80,62,74,99,61,52,64,89,58};
        imprimir(ordenar2(vetor));
        
    }
    public static int[] ordenar(int[] vetor){
        int size = vetor.length;

        for(int a = 0; a < size-1; a++){

                int aux = vetor[a+1];
                for(int b = a; b > 0 || vetor[a] > vetor[a+1]; b--){
                    if(aux < vetor[b]){
                        int temp = vetor[b];
                        vetor[b] = aux;
                        vetor[b+1] = temp;
                    }else{
                        break;
                    }
                }
            }
        
        return vetor;
    }


    public static int[] ordenar2(int[] vetor) {
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
