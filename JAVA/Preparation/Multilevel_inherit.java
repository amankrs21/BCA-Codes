class Parent {
    String n1 = "Parent Class";
}
class Child extends Parent {
    String n2 = "Child Class";
}
class Grand_Child extends Child {
    void display() {
        System.out.println("\n This is from "+n1);
        System.out.println("\n This is from "+n2);
        System.out.println("\n This is Grand Child Class");
    }
}
public class Multilevel_inherit {
    public static void main(String[] args) {
        Grand_Child obj = new Grand_Child();
        obj.display();
    }
}
