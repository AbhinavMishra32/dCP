import java.util.Collection;
import java.util.ArrayList;

public class CollectionLearning {
    public static void main(String[] args) {
        System.out.println("hello");
        Collection<String> stringCollection = new ArrayList<>(3);

        stringCollection.add("yoo");
        stringCollection.add("eeeeeeeee");
        stringCollection.add("dsvddfasf");

        stringCollection.stream().forEach(System.out::println);
    }
}
