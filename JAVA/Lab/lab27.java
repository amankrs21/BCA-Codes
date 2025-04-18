// Program for Subtract elements of the array

import java.util.*;

public class lab27 {
    public static void main(String[] args) {
                
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Limit of the Array : ");
        int limit = ar.nextInt();

        int array[] = new int[limit];

        for (int i = 0; i < limit; i++) {
            System.out.print(" Enter Element "+(i+1)+" : ");
            array[i] = ar.nextInt();
        }
        ar.close();

        System.out.print("\n Elements of the Array are :- ");
        for (int j = 0; j < limit; j++) {
            System.out.print(array[j]+", ");
        }

        int sub=+array[0];
        for (int k = 1; k < limit; k++) {
            sub = sub - array[k];
        }
        System.out.println("\n Substactions of the Array is -> "+sub);
    }
}
