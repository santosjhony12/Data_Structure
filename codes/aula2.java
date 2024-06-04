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

    public static List<Integer> uniaoOrdenada(List<Integer> vetorA, List<Integer> vetorB){
        boolean has = false;

        for(Integer b : vetorB){
            for(Integer a : vetorA){
                if(b == a){
                    has = true;
                    break;
                }
            }
            if(!has){
                vetorA.add(b);
            }
            has = false;
        }

        for(int i = 1; i < vetorA.size(); i++){
            int key = vetorA.get(i);
            int index = i - 1;
            while(index >= 0 && vetorA.get(index) > key){
                vetorA.set(index + 1, vetorA.get(index));
                index -= 1;
            }
            vetorA.set(index +1, key);
        }
        return vetorA;
    }
}
