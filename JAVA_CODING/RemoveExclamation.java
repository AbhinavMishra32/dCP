public class RemoveExclamation {
    static String removeExclamationMarks(String s) {
         //StringBuilder s1 = new StringBuilder(s); 
         return s.replaceAll("!", "");
    }
    public static void main(String[] args){
        System.out.println(RemoveExclamation.removeExclamationMarks("hel!lo!"));
    }
}
