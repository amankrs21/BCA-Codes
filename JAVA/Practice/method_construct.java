// Program to understand the Concept of Methods and Constructor

public class method_construct {
    int enroll;
    String name;
    String batch;
    String branch;

    method_construct(int e, String n) {
        enroll = e;
        name = n;
    }

    method_construct(String ba, String br) {
        batch = ba;
        branch = br;
    }

    void display() {
        System.out.println("\n Student Name is -> " + name);
        System.out.println(" Student Enrollnment No is -> " + enroll);
    }

    void display1() {
        System.out.println("\n Student Belongs to " + batch + " Batch");
        System.out.println(" Student Belongs to " + branch + " Branch");
    }

    public static void main(String[] args) {
        method_construct obj = new method_construct(159, "Aman");
        method_construct obj1 = new method_construct("C", "BCA");
        obj.display();
        obj1.display1();
    }
}
