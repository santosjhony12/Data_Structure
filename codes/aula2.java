import java.util.LinkedList;
import java.util.List;

public class aula2 {
    public static void main(String[] args) {
    
    }
    public static void imprimirAlfabeto(){
        for (int ch = 97; ch <= 122; ch++ ){
            System.out.println((char)ch);
        }

    }

    public static int maiorTamanhoDeUmaSequenciaV2(int[] vetor){
        if(vetor.length == 1){
            return 1;
        } else if (vetor.length == 0) {
            return 0;
        }
        int tms = 1;
        int aux = 0;

        for(int i = 0; i < vetor.length-1; i++){
            if(vetor[i]<vetor[i+1]){
                tms +=1;
            }else{
                tms +=1;
                if(tms > aux){
                    aux = tms;
                }
                tms = 1;
            }
        }
        return (tms>aux) ? tms : aux;
    }

    public static ArrayList<Integer> uniaoOrdenada(ArrayList<Integer> vetorA, ArrayList<Integer> vetorB){
        int indexA = 0;
        int indexB = 0;
        while (indexB < vetorB.size()) {
            if (indexA >= vetorA.size() || vetorB.get(indexB) < vetorA.get(indexA)) {
                vetorA.add(indexA, vetorB.get(indexB));
                indexB++;
            } else if (vetorB.get(indexB).equals(vetorA.get(indexA))) {
                indexB++;
            }
            indexA++;
        }
        return vetorA;
    }
}
