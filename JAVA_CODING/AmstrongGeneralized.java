import java.util.Scanner;
public class AmstrongGeneralized {
    public static void main(String[] args) {
        // Scanner scanner = new Scanner(System.in);
        // int numEnd = scanner.nextInt();
        // scanner.close();

        int numEnd = 100000000;
        for(int num = 0; num<numEnd; num++){
            int sum2 = 0;
            int copy = num;
            int length = String.valueOf(num).length();

            while(copy > 0){
                int digit = copy%10;
                sum2+=Math.pow(digit, length);
                copy=copy/10;
            }

            if(num == sum2){
                System.out.println(num);
            }
        }
        //finding sum of given number
        
    }
}
