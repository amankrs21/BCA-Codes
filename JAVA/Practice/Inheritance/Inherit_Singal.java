// Program for Singal Inheritance

class Parent{
    float salary = 25000;
}
public class Inherit_Singal extends Parent {
    int bonus = 10000;
    public static void main(String[] args) {
        singal_inheri obj = new singal_inheri();
        System.out.println("\n Parent Class Value : "+obj.salary);
        System.out.println("\n Child Class Value : "+obj.bonus);
    }
}
