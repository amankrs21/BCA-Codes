// Program to find volume of cube by method overloading

class Cube{
    int volume;
    Cube(int side){
        volume = side*side*side;
        System.out.println("\n Side of the Cude is : "+side);
        System.out.println("\n Volume of the Cude is : "+volume);
    }
    // Cube(float volume){
    //     volume = side*side*side;
    //     System.out.println("\n Volume of the Cube is : "+volume);
    // }
}
public class Cube_volume {
    public static void main(String[] args) {
        Cube c1 = new Cube(101);
        // Cube c1 = new Cube(12.5);

    }
}
