public class FindThePosition {
    //private static char[] lowerAsciiStr;
    static String lowerAsciiStr;
    public static String position(char alphabet){
        int poschar;
        StringBuilder lowercaseAscii = new StringBuilder();
        for(char c = 'a'; c <='z';c++){ 
            lowercaseAscii.append(c);
        
        }
        String lowerAsciiStr = lowercaseAscii.toString();
        //String[] lowerAsciiStrArr = lowerAsciiStr.split("");
        return "";
    }
    public static void main(String[] args){
        System.out.println(FindThePosition.lowerAsciiStr);
    }
}
