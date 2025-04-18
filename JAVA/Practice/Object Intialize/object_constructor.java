class Student2{
    int enroll;
    String name;
    Student2(int e, String n){
        enroll = e;
        name = n;
    }
    public void display() {
        System.out.println("\n Name -> "+name+"\n Enrollnement No -> "+enroll);
    }
}
public class object_constructor {
    public static void main(String[] args) {
        Student2 obj = new Student2(159, "Aman Kumar Singh");
        obj.display();
    }
    
}
