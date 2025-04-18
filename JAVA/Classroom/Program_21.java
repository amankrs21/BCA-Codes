// Program  to Implement abstract class.

abstract class Base {
    abstract void fun();
}

class Derived extends Base {
    void fun() {
        System.out.println("\n Derived fun() called");
    }
}

class Program_21 {
    public static void main(String args[]) {
        Base b = new Derived();
        b.fun();
    }
}
