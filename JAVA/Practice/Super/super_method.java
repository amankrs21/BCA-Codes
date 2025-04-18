// Program to use super keyword to invoke parent class method

class C{
    void display(){
        System.out.println("\n Hello This is Aman Singh");
    }
}
class D extends C{
    void hello(){
        super.display();
    }
}
public class super_method {
    public static void main(String[] args) {
        D obj = new D();
        obj.hello();
    }
}