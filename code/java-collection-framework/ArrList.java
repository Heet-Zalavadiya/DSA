import java.util.*;

public class ArrList {
    public static void main(String[] args) {
        /*
         * List<Integer> list = new ArrayList<>();
         * // First internally creates an array of size 10
         * // size = n
         * // n + n/2 + 1 will create new array when 10 element is filled and copy
         * element to new arr
         * list.add(1);
         * list.add(2);
         * list.add(3);
         * System.out.println(list);
         * 
         * list.add(4); // this will add 4 at the end of list
         * System.out.println(list);
         * 
         * list.add(1, 50);
         * System.out.println(list);
         * 
         * List<Integer> newList = new ArrayList<>();
         * 
         * newList.add(100);
         * newList.add(200);
         * 
         * list.addAll(newList); // this will add new list to current list
         * System.out.println(list);
         * 
         * System.out.println(list.get(1));
         */

        List<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(50);
        list.add(60);
        list.add(70);
        list.add(80);

        System.out.println(list); // when object is written syso then it will invok object toString() method

        for (int i = 0; i < list.size(); i++) {
            System.out.println("The element is " + list.get(i));
        }

        for (Integer element : list) {
            System.out.println("foreach element is " + element);
        }

        Iterator<Integer> it = list.iterator();
        
        while (it.hasNext()) {
            System.out.println("iterator " + it.next());
        }

        // list.set(2, 1000);
        // System.out.println(list);

        // System.out.println(list.contains(50));

        // list.remove(1);
        // System.out.println(list);

        // list.remove(Integer.valueOf(30));
        // System.out.println(list);

        // list.clear(); // will remove all element from list
        // System.out.println(list);

    }
}