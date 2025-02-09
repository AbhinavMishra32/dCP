public class MultiplicationTable {
    public static String multiTable(int num){
        StringBuilder result = new StringBuilder();
        for(int i =1; i<=9;i++){
            result.append(String.valueOf(i));
            result.append(" ");
            result.append("*");
            result.append(" ");
            result.append(String.valueOf(num));
            result.append(" ");
            result.append("=");
            result.append(" ");
            result.append(String.valueOf(i*num));
            result.append("\n");
        }
            result.append(String.valueOf(10));
            result.append(" ");
            result.append("*");
            result.append(" ");
            result.append(String.valueOf(num));
            result.append(" ");
            result.append("=");
            result.append(" ");
            result.append(String.valueOf(10*num));
        return String.valueOf(result);
    }
}
