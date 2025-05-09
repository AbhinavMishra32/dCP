public class ExceptionHandling {
    public static void main(String args[]) {
        try{
            int a = 10;
            if (a == 10){
                throw new MyException("yooooo");
            }
            int c = a/0;
        } catch (ArithmeticException e) {
            e.printStackTrace();
        } catch (MyException e) {
            System.out.println("My Exception!!!");
            e.printStackTrace();
        }
    }
    public static class MyException extends Exception {
        public MyException(String message){
            super(message);
        }
    }
}
