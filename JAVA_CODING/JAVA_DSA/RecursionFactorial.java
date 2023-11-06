public class RecursionFactorial{
    public int factorial(int n){
        if(n==1 || n==0){
            return 1;
        }

        int fact_nm1 = factorial(n-1);
        int fact_n = n*fact_nm1;
        return fact_n;

    }

    public static void main(String[] args){
        RecursionFactorial ny = new RecursionFactorial();
        System.out.println(ny.factorial(5));
    }
}