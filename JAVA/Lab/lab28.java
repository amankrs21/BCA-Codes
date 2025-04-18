// Program for Multiplication of array

import java.util.*;
public class lab28 {
    public static void main(String[] args) {

        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Limit of the Array : ");
        int limit = ar.nextInt();

        int array[] = new int[limit];

        for (int i = 0; i < limit; i++) {
            System.out.print(" Enter Element : ");
            array[i] = ar.nextInt();
        }
        ar.close();

        System.out.print("\n Elements of the Array are :- ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+", ");
        }

        int mul = 1;
        for (int i = 0; i < array.length; i++) {
            mul = mul * array[i];
        }

        System.out.println("\n\n Multiplication of the Elements are :- "+mul);
    }
}
