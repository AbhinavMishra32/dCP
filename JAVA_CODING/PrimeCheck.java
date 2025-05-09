import java.util.Scanner;

class PrimeCheck {
	public static void main (String args[]) {
		int flag = 0;
		int num = Integer.parseInt(args[0]);
		for(int i = 2; i< num; i++) {
			if(num % i == 0) {
				System.out.println("Not prime");
			flag++;
			break;
			}
		}
		
		if(flag == 0) {
			System.out.println("Prime");
		}
	}
}