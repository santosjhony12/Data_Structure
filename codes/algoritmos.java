class algoritmos{
    public static void main(String[] args) {
        System.out.println(invert_number(12305671));
        System.out.println(isPalindrome("Missa é assim"));
        
    }
    static int invert_number(int number){
        String string = String.valueOf(number);
        String[] list = string.split("");
        string = "";
        for (int i = list.length - 1; i >= 0; i-- ){
            string += list[i];
        }
        number = Integer.parseInt(string);
        return number;
    }
    static String invert_string(String string){
        String[] list = string.split("");
        string = "";
        for (int i = list.length - 1; i >= 0; i-- ){
            string += list[i];
        }
        return string;
    }
    static boolean isPalindrome(String string){
        String string1 = string.replace(" ", "").toLowerCase();
        String string2 = invert_string(string).replace(" ", "").toLowerCase();
        if(string1.equals(string2))
            return true;
        else
            return false;
    }

}
