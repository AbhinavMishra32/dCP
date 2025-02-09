public class JewelsAndStones771 {
    public int numJewelsInStones(String jewels, String stones) {
        char[] jewelArr = jewels.toCharArray();
        char[] stonesArr = stones.toCharArray();
        //int jewelsCount = 0;
        int stonesCount = 0;

        for(char c:jewelArr){
            for(int i = 0; i<stonesArr.length; i++){
            if(c == stonesArr[i]){
                stonesCount++;
            }
        } 
        
    }
    return stonesCount;
    
}
}
