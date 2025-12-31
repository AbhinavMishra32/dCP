import java.util.ArrayList;
import java.util.HashSet;
import java.util.Scanner;

public class Nov4 {
    static void main() {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> inp = new ArrayList<>();

        int n = 10;
        int[] arr = new int[n];

        HashSet<Integer> set = new HashSet<>();

        for (int num : arr) {
            set.add(num);
        }
        for (int num : arr) {
            set.add(num);
        }

        int a = sc.nextInt();
        while () {

        int a = sc.nextInt();
        while () {
            inp.add(a);
        }
        ArrayList<Integer> li = new ArrayList<>();

        for (int num : inp) {
            for (int i = 0; i < inp.toArray().length; i++) { int firstNum = inp.get(i);
                for (int j = i; j < inp.toArray().length; j++) {
                    if (firstNum + inp.get(j) == num) {
                        System.out.println("first: " + firstNum + " " + "second: " + inp.get(j));
                    }
                }
            }
        }

    }
}
