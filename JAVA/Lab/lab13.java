// Program to use for loop

import java.util.*;
public class lab13 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter number to find its Table : ");
        int number = ar.nextInt();
        ar.close();

        for (int i = 1; i < 11; i++) {
            System.out.print("\n\t "+number+" * "+i+" = "+(number*i));
        }
        System.out.println();
    }
}
