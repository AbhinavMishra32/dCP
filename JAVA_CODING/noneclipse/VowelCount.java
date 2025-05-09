import java.util.Scanner;
public class VowelCount {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String vowelString = scan.nextLine();
        int count = 0;

        for(char letter : vowelString.toCharArray()) {
            if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
                count++;
            }
        }

        System.out.println("Count: "+ count);
    }
}