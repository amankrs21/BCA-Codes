// Program to use super keyword to invoke parent class constructor

class E{
    E(){
        System.out.println("\n Hello All, Welcome to Java World");
    }
}
class F extends E{
    // we invoke parent class condtructor only in the another constructor
    F(){
        super();    // super() keyword is used to invoke parent class constructor
    }
    void display(){
        System.out.println();
    }
}
public class super_const {
    public static void main(String[] args) {
        F obj = new F();
        obj.display();
    }
}
