import java.util.LinkedList;
import java.util.Queue;
public class queueLL {
    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();
        queue.offer(12);   // add() it throws exception 
        queue.offer(13);
        queue.offer(36);

        System.out.println(queue);

        System.out.println(queue.poll()); // remove() it theows expception

        System.out.println(queue);

        System.out.println(queue.peek());  // element() it throws exception
    }
}
