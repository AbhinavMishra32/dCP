public class VowerRemover {
    public static String shortcut(String input) {
        String s = input.replaceAll("[aeiou]", "");
        return s;
      }
}
