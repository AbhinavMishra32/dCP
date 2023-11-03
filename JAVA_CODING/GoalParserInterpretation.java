public class GoalParserInterpretation {
    public String interpret(String command) {
        String s1 = command.replace("()", "o");
        s1 =s1.replace("(al)", "al");
        return s1;
    }
}
