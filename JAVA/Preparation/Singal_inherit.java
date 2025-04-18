
class Car {
    String name = "XUV 500";
}
class Tata extends Car {
    void display() {
        System.out.println("\n This is the Child Class... \n and Car Name is :- "+name);
    }
}
public class Singal_inherit {
    public static void main(String[] args) {
        Tata obj = new Tata();
        obj.display();
    }
}
