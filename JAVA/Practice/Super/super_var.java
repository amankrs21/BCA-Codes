// Program to use super keyword to invoke parent class variable

class A{
    String name = "Aman";
}

class B extends A{
    void display(){
        System.out.println("\n My Name is : "+super.name);
    }
}

public class super_var {
    public static void main(String[] args) {
        B obj = new B();
        obj.display();
    }
}
