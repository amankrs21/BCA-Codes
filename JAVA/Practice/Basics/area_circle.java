import java.util.Scanner;

public class area_circle {
    public static void main(String[] args) {
        
        double radius, circle;

        Scanner ar = new Scanner(System.in);
        
        System.out.print("\n Enter Radius of the Circle : ");
        radius = ar.nextDouble();

        circle = 3.14 * (radius * radius);

        ar.close();

        System.out.println("\n Area of the Circle is -> "+circle + " sq unit");
    }
}
