public class RecursionPattern {
    public static void printPattern(int height){
        if(height>0){
        String result = "*";
        System.out.println(result.repeat(height));
        printPattern(height-1);
        }
    }

    public static void main(String[] args){
        RecursionPattern.printPattern(5);
    }
}
