// Prorgram for multilevel inheritance

class animals {
    void display(){
        System.out.println("\n Here all Animals are Considered");
    }
}
class dog extends animals{
    void display1(){
        System.out.println(" Here all Dogs are Considered");
    }
}
class puppy extends dog{
    void display2(){
        System.out.println(" Here Puppies of Dogs are Considered");
    }
}

public class lab19 {
    public static void main(String[] args) {
        puppy obj = new puppy();

        obj.display();
        obj.display1();
        obj.display2();
    }
}
