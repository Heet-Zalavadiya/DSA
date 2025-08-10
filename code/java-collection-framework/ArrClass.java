import java.util.Arrays;

public class ArrClass {
    public static void main(String[] args) {
        int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        int index = Arrays.binarySearch(numbers, 4);

        System.out.println("The index of element 4 in the array using binary search" + " is " + index);

        Integer[] n = { 10 ,20, 30, 50, 80,90, 100, 20, 1 };
        Arrays.sort(n);

        Arrays.fill(numbers, 12);

        for (Integer i : n) {
            System.out.print(i + " ");
        }
    }
}
