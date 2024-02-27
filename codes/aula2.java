import java.util.LinkedList;
import java.util.List;

public class aula2 {
    public static void main(String[] args) {
        int[] array = {7,3,5,8,10,2,20,30,8,9,10,11,12};
        aula2.imprimirAlfabeto();
        System.out.println(aula2.maiorTamanhoDeUmaSequenciaV2(array));
    }
    public static void imprimirAlfabeto(){
        for (int ch = 97; ch <= 122; ch++ ){
            System.out.println((char)ch);
        }

    }

    public static int maiorTamanhoDeUmaSequencia(int[] vetor){
        if(vetor.length == 1){
            return 1;
        } else if (vetor.length == 0) {
            return 0;
        }
        List<Integer> listSim = new LinkedList<>();
        List<Integer> listNao = new LinkedList<>();

        for(int i = 0; i < vetor.length-1; i++){
            if(vetor[i]<vetor[i+1]){
                listSim.add(vetor[i]);
            }else{
                listSim.add(vetor[i]);
                if(listSim.size() > listNao.size()){
                    listNao = new LinkedList<>(listSim);
                }
                listSim.clear();
            }
        }
        if(vetor[vetor.length-1] > vetor[vetor.length-2]){
            listSim.add(vetor[vetor.length-1]);
        }

        if(listSim.size()>listNao.size()){
            return listSim.size();
        }else{
            return listNao.size();
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

    public static int[] uniaoOrdenada(int[] a, int[] b){
        int tamanho = a.length + b.length;
        a[]
        return;

    }
}
