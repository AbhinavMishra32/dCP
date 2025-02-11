public class ReturningStrings{
    public static void main(String[] args){
        System.out.println(ReturningStrings.greet("Abhinav"));
    }

    public static String greet(String name){
        return ("Hello, " + name + " how are you doing today?");
    }
}