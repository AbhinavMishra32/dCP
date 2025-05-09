public class ArrayTraverse {
    public static void main(String args[]) {
        String arr[] = { "Hello", "how", "are", "you?" };
        int longest = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i].length() > longest) {
                System.out.println("new longest: " + arr[i]);
                longest = arr[i].length();
            }
        }

        System.out.println("Longest: " + longest);
    }
}