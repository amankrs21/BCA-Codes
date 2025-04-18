class Student1{
    int enroll;
    String name;

    void funtion(int e, String n){
        enroll = e;
        name = n;
    }
    void display(){
        System.out.println("\n Name -> "+name+"\n Enrollnment No -> "+enroll);
    }
}
public class object_method {
    public static void main(String[] args) {
        Student1 obj = new Student1();
        obj.funtion(159, "Aman");
        obj.display();
    }
}
