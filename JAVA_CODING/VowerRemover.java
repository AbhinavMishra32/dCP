public class VowerRemover {
    public static String shortcut(String input) {
        // StringBuilder input2 = new StringBuilder();
        // for(int i=0;i<=input.length();i++){
        //     if()
        // }
        // input2.deleteCharAt(0))
        // return input;   
        String s = input.replaceAll("[aeiou]", "");
        return s;
      }
}
