public class FindThePosition {
    //private static char[] lowerAsciiStr;
    //static String lowerAsciiStr;
    private static char[] lowerAsciiStrArr;
    public static String position(char alphabet){
        int posChar;
        StringBuilder lowercaseAscii = new StringBuilder();
        for(char c = 'a'; c <='z';c++){ 
            lowercaseAscii.append(c);
        
        }
        String lowerAsciiStr = lowercaseAscii.toString();
        String[] lowerAsciiStrArr = lowerAsciiStr.split(""); // Using an empty string as delimiter
        return "";
    }

    public static void main(String[] args){
        FindThePosition.position('b');
        
        System.out.println(FindThePosition.lowerAsciiStr);
        System.out.println(FindThePosition.lowerAsciiStrArr);

    }
}
