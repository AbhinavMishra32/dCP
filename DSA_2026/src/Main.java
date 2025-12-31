import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int limit = sc.nextInt();
        StringBuilder newString = new StringBuilder();

        int count = 1;
        for (int i = 1; i <= input.length(); i++) {
            if (i < input.length() && input.charAt(i) == input.charAt(i - 1)) {
                count++;
            } else {
                if (count >= limit) {
                    newString.append(input.charAt(i - 1)).append(count);
                } else {
                    for (int j = 0; j < count; j++) {
                        newString.append(input.charAt(i - 1));
                    }
                }
                count = 1;
            }
        }

        System.out.println(newString);
    }
}