import java.util.ArrayList;

public class SumofNthTerm {
    public static String seriesSum(int n){
        float result =1.0f;
        float denominator =4.0f;

        for(int i=1;i<n;i++){
            result += 1.0f / denominator;
            denominator +=3.0f;
        }
        // String result1 = String.valueOf(result);
        return String.format("%.2f", result);
    }
    public static void main(String[] args){
        System.out.println(SumofNthTerm.seriesSum(15));
    }
}
