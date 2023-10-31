import java.util.ArrayList;
import java.util.stream.IntStream;

public class PlayingWithDigitsPart2 {
    public static int[] eurekaFunction(int a, int b) {
        IntStream intStream = IntStream.range(a, b);
        ArrayList<Integer> result = new ArrayList<>();
        int[] rangeIntArray = intStream.toArray();
        
        for (int i : rangeIntArray) {
            int sum = 0;
            String iStr = Integer.toString(i);

            for (int j = 0; j < iStr.length(); j++) {
                int digit = Character.getNumericValue(iStr.charAt(j));
                sum += (int) Math.pow(digit, j + 1);
            }

            if (sum == i) {
                result.add(i);
            }
        }

        int[] newResult = flattenArray(result);
        for (int y : newResult) {
            System.out.print(y + ", ");
        }

        return newResult;
    }

    public static int[] flattenArray(ArrayList<Integer> arrList) {
        int[] flattenedArray = new int[arrList.size()];

        for (int i = 0; i < arrList.size(); i++) {
            flattenedArray[i] = arrList.get(i);
        }

        return flattenedArray;
    }

    public static void main(String[] args) {
        PlayingWithDigitsPart2.eurekaFunction(0, 200000000);
    }
}
