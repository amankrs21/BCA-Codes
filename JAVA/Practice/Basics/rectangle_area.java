// Program to find area of rectangle by taking user input

import java.util.Scanner;

public class rectangle_area {
    public static void main(String[] args) {
        int length, breadth, area;

        Scanner sc = new Scanner(System.in);

        System.out.print("\n Enter Lenght of the Rectangle : ");
        length = sc.nextInt();

        System.out.print(" Enter Breadth of the Rectangle : ");
        breadth = sc.nextInt();

        sc.close();

        area = 2 * (length + breadth);

        System.out.println("\n Area of the Rectangle is -> "+ area);
    }
}
