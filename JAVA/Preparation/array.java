// Program for Instialisation of Array

import java.util.*;
public class array {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Size of Array : ");
        int size = ar.nextInt();

        int array[] = new int[size];

        for (int i = 0; i < array.length; i++) {
            System.out.print(" Enter Elements : ");
            array[i] = ar.nextInt();
        }
        ar.close();

        System.out.print("\n Elements of Array are :- ");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]+", ");
        }
        System.out.println();
    }
}
