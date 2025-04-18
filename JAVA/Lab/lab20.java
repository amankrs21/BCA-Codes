// Program for Hierarchical Inheritance

class parul {
    void display(){
        System.out.println("\n Hello, Welcome to Parul University");
    }
}
class bca extends parul {
    void display1(){
        System.out.println(" BCA is a Course in Parul University");
    }
}
class mba extends parul {
    void display2(){
        System.out.println(" MBA is also a Course in Parul University ");
    }
}
public class lab20 {
    public static void main(String[] args) {
        // here we have to create two object to access all the classs
        bca obj = new bca();
        mba obj1 = new mba();

        obj.display();
        obj.display1();
        obj1.display();
        obj1.display2();
    }
}
