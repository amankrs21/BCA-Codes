// Program to find area of Circle

import java.util.Scanner;

public class lab5 {
    public static void main(String[] args) {
        System.out.print("\n Enter Radius of Circle : ");
        Scanner ar = new Scanner(System.in);
        double radius = ar.nextDouble();
        ar.close();
        double area = (3.14)*(radius*radius);

        System.out.println("\n Area of the Circle is -> "+area+"sq unit");
    }
}
