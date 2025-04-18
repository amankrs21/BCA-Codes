class Student{
    int enroll;
    String name;
}
public class object_reference {
    public static void main(String[] args) {
        // Creating a Object of Student class
        Student obj = new Student();
        obj.enroll = 159;
        obj.name = "Aman";
        System.out.println("\n Enrollnment No -> "+obj.enroll+"\n Name -> "+obj.name);
    }
}
