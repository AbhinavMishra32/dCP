import java.util.Arrays;

public class Flatten2DArray {
    public static int[] flattenAndSort(int[][] array) {
        if (array.length == 0) {
            return new int[0];
        }

        for (int i = 0; i < array.length; i++) {
            if (array[i].length == 0) {
                return new int[0]; // If any sub-array is empty, return an empty array
            }
        }

        int totalLength = 0;
        for (int i = 0; i < array.length; i++) {
            totalLength += array[i].length;
        }

        int[] result = new int[totalLength];
        int index = 0;

        for (int i = 0; i < array.length; i++) {
            for (int j = 0; j < array[i].length; j++) {
                result[index] = array[i][j];
                index++;
            }
        }

        Arrays.sort(result);
        return result;
    }
}
