import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class collectionClass {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        list.add(34);
        list.add(12);
        list.add(56);
        list.add(9);
        list.add(9);
        list.add(9);

        System.out.println("min element " + Collections.min(list));
        System.out.println("max element " + Collections.max(list));
        System.out.println(Collections.frequency(list, 9));

        Collections.sort(list , Comparator.reverseOrder());

        System.out.println(list);
    }
}
