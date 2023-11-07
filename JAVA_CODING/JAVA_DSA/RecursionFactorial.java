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
    public static int selfRecursionPower(int x, int n){
        if(n==1){
            return 1;
        }

        return x*selfRecursionPower(x,n-1);
    }
    public static int recursionPowerNlogN(int x, int n){
        if(n==0){
            return 1;
        }
        if(x==0){ // only when x is 0, dont worry in dry run
            return 0;
        }
        //n is even
        if(n%2==0){
            return recursionPowerNlogN(x, n/2) * recursionPowerNlogN(x, n/2);
        }
        else{ //n is odd
            return recursionPowerNlogN(x, (n)/2) * recursionPowerNlogN(x, (n)/2) * x;
        }

}

}
    public static void main(String[] args){
//        System.out.println(RecursionPower.recursionPowerNlogN(2, 5));
        int base = 2;
        int exponent = 4;
        int result = RecursionPower.recursionPowerNlogN(base, exponent);
        System.out.println(base + " raised to the power of " + exponent + " is: " + result);
    }
}