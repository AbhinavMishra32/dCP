public class ArrayNum {
    public static int[] between(int a, int b){
        // StringBuilder str = new StringBuilder(b-a);
        // String newstr = str.toString();
        // String[] newstrarr = newstr.split("");
        if(a>=b){
            return new int[0];
        }
        int[] result = new int[b-a];
        for(int i = 0; i<result.length;i++){
            result[i] = a+i;
        }
        return result;
    }
    public static void main(String[] args){
        System.out.println(ArrayNum.between(3, 9));
    }
}
