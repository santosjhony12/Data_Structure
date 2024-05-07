package Ordenação;
// COMPLEXIDADE O(n²)
/*
 * # VARIAVEL AUXILIAR MAIOR - INICIALIZA COM 0
# guardo o indice - sempre comparo com o indice
# no final troco de lugar o maior
# zero a varivel com o indice 0 e reinicio minha comparação
 */
class OrdenacaoSelecao{
    public static void main(String[] args) {
        int maior = 0;

        int[] array = {50,54,80,62,74,99,61,52,64,89,58};
        int size = array.length;

        for(int a = size ; a > 0; a--){
            for(int b = 0; b < a; b++ ){
                if(array[b] > array[maior]){
                    maior = b;
                }  
            }
            int valorMaior = array[maior];
            array[maior] = array[a-1];
            array[a-1] = valorMaior;
            maior = 0;
        }

        imprimir(array);
        
    }
    public static void imprimir(int[] vetor){
        for(int i : vetor){
            System.out.println(i);
        }
    }
}
