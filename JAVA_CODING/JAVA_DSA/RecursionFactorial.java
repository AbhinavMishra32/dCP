public class RecursionFactorial{
    public int factorial(int n){
        if(n==1 || n==0){
            return 1;
        }

        int fact_nm1 = factorial(n-1);
        int fact_n = n*fact_nm1;
        return fact_n;

    }

public class RecursionPower{
    public static int recursionPowerFinder(int x, int n){  
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        int powernm1 = recursionPowerFinder(x, n-1);
        int power = x*powernm1;
        return power;
    }
}

public class

    public static void main(String[] args){
        RecursionFactorial ny = new RecursionFactorial();
        System.out.println(RecursionPower.recursionPowerFinder(2, 5));
    }
}