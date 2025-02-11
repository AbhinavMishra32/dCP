public class Leetcode2114 {
    public int mostWordsFound(String[] sentences) {
        //StringBuilder lengths = new StringBuilder();
        //int[] lengthsInt = new int[sentences.length];
        int max = 0;
        for(String sentence : sentences){
            String[] words = sentence.split(" ");
        int wordCount = words.length;

        if(wordCount>max){
            max = wordCount;
        }    
            }
        return max;
    }

}
