public class Ordenacao{
	public static int[] insert_sort(int[] array){
		for(int i = 1; i < array.length; i ++){
			int key = array[i];
			int index = i - 1;
			
			while(index >= 0 && array[index] > key){
				array[index + 1] = array[index];
				index -= 1;
			}
			array[index + 1] = key;
		}
		return array;
	}
}
