// Program for MultiLevel Inheritance

class Program_18 {
    public Program_18()
    {
        System.out.println("Class Program_18");
    }
    public void vehicleType()
    {
        System.out.println("Vehicle Type: Program_18");
    }
}
class Maruti extends Program_18{
    public Maruti()
    {
        System.out.println("Class Maruti");
    }
    public void brand()
    {
        System.out.println("Brand: Maruti");
    }
    public void speed()
    {
        System.out.println("Max: 90Kmph");
    }
}

class Maruti800 extends Maruti{

    public Maruti800()
    {
        System.out.println("Maruti Model: 800");
    }
    public void speed()
    {
        System.out.println("Max: 80Kmph");
    }
    public static void main(String[] args) {
        Maruti800 obj = new Maruti800();
        obj.vehicleType();
        obj.brand();
        obj.speed();
    }
}
