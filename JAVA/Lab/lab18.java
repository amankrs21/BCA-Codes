// Program for Singal Inheritance

class electricity {
    void display(){
        System.out.println("\n Heyy... I'm Electricity");
    }
}
class laptop extends electricity{
    void display1(){
        System.out.println("\n I'm a Laptop and I can't survive witout Electricity");
    }
}
public class lab18 {
    public static void main(String[] args) {
        laptop obj = new laptop();
        obj.display();
        obj.display1();
    }
}
