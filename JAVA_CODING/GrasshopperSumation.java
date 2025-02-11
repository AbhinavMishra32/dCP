public class GrasshopperSumation {
    public static int summation(int n){
        int sum = 0;
        //char[] nArr = String.valueOf(n).toCharArray();
        int[] nIntArr = new int[n];
        for(int i= 0; i<nIntArr.length;i++){
            nIntArr[i] = i+1;
        }
        for(int j=0;j<nIntArr.length;j++){
            sum+=nIntArr[j];
        }
        return sum;
    }
    public static void main(String[] args){
        System.out.println(GrasshopperSumation.summation(6));
    }
}
