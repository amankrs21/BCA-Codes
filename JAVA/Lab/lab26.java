// Program for add elements of 1-D Array

import java.util.*;

public class lab26 {
    public static void main(String[] args) {

        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Limit of Array : ");
        int limit = ar.nextInt();

        int array[] = new int[limit];

        for (int i = 0; i < limit; i++) {
            System.out.print(" Enter Element : ");
            array[i] = ar.nextInt();
        }
        ar.close();

        System.out.print("\n Elements of the Array are :- ");
        for (int i = 0; i < limit; i++) {
            System.out.print(array[i]+", ");
        }

        int sum = 0;

        for (int i = 0; i < limit; i++) {
            sum = sum + array[i];
        }

        System.out.println("\n Sum of Elements of the Array is : "+sum);

    }
}
