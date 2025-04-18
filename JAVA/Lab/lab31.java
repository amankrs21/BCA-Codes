// Program to use of Super Key-Word

class Name {
    String name = "Harry Potter";
    Name(){
        System.out.println("\n My Name is Harry");
    }
}
class Name2 extends Name{
    String name = "James Gossling";
    Name2(){
        // super(); invoke imediate parent constructor
        super();
        System.out.println("\n My Name is James");
    }
    void display(){
        System.out.println(super.name);
        System.out.println(name);
    }
}

public class lab31 {
    public static void main(String[] args) {
        Name2 obj = new Name2();
        obj.display();
    }
}
