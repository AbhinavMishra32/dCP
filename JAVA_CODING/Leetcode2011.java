public class Leetcode2011{
    public int finalValueAfterOperations(String[] operations){
        int number = 0;
        for(String i : operations){
            if(i.equals("++X") || i.equals("X++")){
                number = number +1;
            }
            else if(i.equals("--X") || i.equals("X--")){
                number = number -1;
            }
        }
        return number;
    }
}