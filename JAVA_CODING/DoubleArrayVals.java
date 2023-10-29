public class DoubleArrayVals {
    public static int[] map(int[] arr){
        int[] newarr = new int[arr.length];
        for(int i = 0; i<=arr.length-1;i++){
            newarr[i] = arr[i]*2;
        }
        return newarr;

    }
}
