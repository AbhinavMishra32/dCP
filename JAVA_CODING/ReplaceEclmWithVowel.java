public class ReplaceEclmWithVowel {
    public static String replace(final String s) {
        char[] s1 = s.toCharArray();
        StringBuilder s2 = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' ||
                    s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U') {
                s2.append("!");
            } else {
                s2.append(s1[i]);
            }
        }
        return s2.toString();
    }
}
