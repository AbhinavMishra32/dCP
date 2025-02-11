public class FactorialFunction {
    public static long factorial(int n) {
        long result =1L;
        for(int i=0;i<n;i++){
            result*= (n-i);
        }
        return result;
    }
}
