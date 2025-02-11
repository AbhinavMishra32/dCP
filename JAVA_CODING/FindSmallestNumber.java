import java.util.Arrays;

public class FindSmallestNumber {
    public static int findSmallestInt(int[] args) {
        Arrays.sort(args);
        return args[0];
    }

    public static void main(String[] args){
        int[] myarr = {2,4,6,3,4,7,8};
        System.out.println(FindSmallestNumber.findSmallestInt(myarr));
    }
}
