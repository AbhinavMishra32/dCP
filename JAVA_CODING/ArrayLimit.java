public class ArrayLimit{
  public static boolean smallEnough(int[] a, int ArrayLimit){
        for(int i = 0; i<a.length;i++){
            if (a[i]>ArrayLimit){
                return false;
            }
//             else{
//                 return false;
//             }
        }
        return true;
    }
}
