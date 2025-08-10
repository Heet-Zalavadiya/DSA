import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class hashSet {
    public static void main(String[] args) {
        // Set<Integer> set = new HashSet<>(); // does not maintain order O(1)
        // Set<Integer> set = new LinkedHashSet<>();  // maintain order 
        Set<Integer> set = new TreeSet<>();  // sorted order O(log n)

        set.add(32);
        set.add(2);
        set.add(54);
        set.add(21);
        set.add(65);

        set.add(54);

        System.out.println(set);

        set.remove(54);
        System.out.println(set);

        System.out.println(set.contains(21));
        System.out.println(set.isEmpty());
        System.out.println(set.size());

        set.clear();

        System.out.println(set);
    }
}
