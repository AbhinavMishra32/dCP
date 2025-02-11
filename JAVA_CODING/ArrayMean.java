public class ArrayMean {
    public static int findAverage(int[] nums) {
        int sum =0;
        int mean=0;
        for(int i: nums){
            sum =+i;
        }
        mean = sum/(nums.length-1);
        return mean;
    }
}
