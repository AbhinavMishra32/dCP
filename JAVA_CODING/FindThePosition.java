import java.util.Arrays;

public class FindThePosition {
    //private static char[] lowerAsciiStr;
    //static String lowerAsciiStr;
    public static String position(char alphabet){
        StringBuilder lowercaseAscii = new StringBuilder();
        for(char c = 'a'; c <='z';c++){ 
            lowercaseAscii.append(c);
        }

        String lowerAsciiStr = lowercaseAscii.toString();
        //String[] lowerAsciiStrArr = lowerAsciiStr.split(""); // Using an empty string as delimiter
        for (int i = 0;i<lowerAsciiStr.length();i++){
            char currentChar = lowerAsciiStr.charAt(i);
        
        //String finalStr = "Position of alphabet: ";
        if(currentChar == alphabet){
            System.out.println("Position of alphabet: " + (i+1));
        }
        }
        return "";
    }

    public static void main(String[] args){
        //System.out.println(Arrays.toString(FindThePosition.position('b'))); 
        //System.out.println(FindThePosition.lowerAsciiStr);
        //System.out.println(FindThePosition.lowerAsciiStrArr);

        FindThePosition.position('c');
    }
}
