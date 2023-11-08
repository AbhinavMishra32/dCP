import java.util.Arrays;

public class RecursionReverseString {
    public static void reverseString(char[] s) {
        if(s.length>0){
        StringBuilder result = new StringBuilder();
        result.append(s[s.length-2]);
        char[] newArr = Arrays.copyOfRange(s, 0, s.length-1);
        reverseString(newArr);

    }
    }

    public static void main(String[] args) {
        char[] input = {'h','e','l','l','o'};
        RecursionReverseString.reverseString(input);
    }
}