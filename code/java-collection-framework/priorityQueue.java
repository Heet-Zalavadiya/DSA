import java.util.Comparator;
import java.util.PriorityQueue;
import java.util.Queue;

public class priorityQueue {
    public static void main(String[] args) {
        
        Queue<Integer> pq = new PriorityQueue<>(Comparator.reverseOrder());  
        // pq implement min heap by default
        // custom comparator for customised ordering
        // does not allow null value
        // when remove or poll it will be prority wise but while iterating it may not be in sorted manner

        pq.offer(40);
        pq.offer(12);
        pq.offer(24);
        pq.offer(36);
        
        System.out.println(pq);

        pq.poll();
        System.out.println(pq);

        System.out.println(pq.peek());
    }
}
