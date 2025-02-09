public class RemoveExclm {
    public static String remove(String s, int n){
        char[] s1 = s.toCharArray();
        int count = 0;
        StringBuilder result = new StringBuilder();
        for(char c: s1){
            if (c == '!'&& count<n){
                count++;
            }
            else{
                result.append(c);
            }
        }
        return result.toString();
        }
    public static void main(String[] args){
        System.out.println(RemoveExclm.remove("Hello!! hi how are you!!!!", 3));
    }
    }

