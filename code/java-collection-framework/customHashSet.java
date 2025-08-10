import java.util.HashSet;
import java.util.Objects;
import java.util.Set;

class Student { // this is a student class
    String name;
    int rollNo;

    Student(String name, int rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    @Override
    public String toString() {
        return "Student [name=" + name + ", rollNo=" + rollNo + "]";
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (!(obj instanceof Student))
            return false;
        Student other = (Student) obj;
        return rollNo == other.rollNo;
    }

    @Override
    public int hashCode() {
        // TODO Auto-generated method stub
        return Objects.hash(rollNo);
    }
}

public class customHashSet {
    public static void main(String[] args) {
        Set<Student> studentSet = new HashSet<>();

        studentSet.add(new Student("Anuj", 2));
        studentSet.add(new Student("Ramesh", 4));
        studentSet.add(new Student("Shivam", 3));
        studentSet.add(new Student("Rohit", 2));

        Student s1 = new Student("Anuj", 2);
        Student s2 = new Student("Rohit", 2);

        System.out.println("s1.hashCode(): " + s1.hashCode());
        System.out.println("s2.hashCode(): " + s2.hashCode());

        System.out.println("s1.equals(s2): " + s1.equals(s2));

        System.out.println(studentSet);
    }
}
