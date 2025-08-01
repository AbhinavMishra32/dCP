import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;

class Main {
    public static void main(String[] args) throws IOException {
        ArrayList<String> arr = new ArrayList<>(Arrays.asList("yoo", "saf", "ddgf"));
        System.out.println(arr.toString());
        arr.stream()
                .filter(str -> str.length() == 3)
                .map(arrString -> arrString.concat("123"))
                .forEach(System.out::println);

        BufferedReader reader = new BufferedReader(new FileReader("myfile.txt"));
        String line;
        while ((line = reader.readLine()) != null) {
            System.out.println(line);
        }

        MyThread mt = new MyThread();
        mt.start();

        Thread mt2 = new Thread(new MyThread2());
        mt2.start();
    }
}

class MyThread extends Thread {
    @Override
    public void run(){
        System.out.println("This is my MyThread");
    }
}

class MyThread2 implements Runnable {

    @Override
    public void run(){
        System.out.println("This is runnable Thread!");
    }
}