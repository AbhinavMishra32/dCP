public class ReverseString {
    public static String solution(String str){
        char[] newStr = str.toCharArray();
        StringBuilder reversedStr = new StringBuilder();
        for(int i =newStr.length-1;i>=0;i--){
            reversedStr.append(newStr[i]);
        }
        return reversedStr.toString();
    }
    public static void main(String[] args){
        String heee = "Hello";
        System.out.println(ReverseString.solution(heee));
    }
}
