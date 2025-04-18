// Program to Intialize a Array

import java.util.*;
public class lab24 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Limit of Array : ");
        int limit = ar.nextInt();

        int array[] = new int[limit];
        
        for (int i = 0; i < array.length; i++) {
            System.out.print(" Enter Element : ");
            array[i] = ar.nextInt();
        }
        ar.close();

        System.out.print("\n Elements of the Array are :- \n");
        for (int i = 0; i < array.length; i++) {
            System.out.print("\t"+array[i]);
        }
        System.out.println();
    }
}
