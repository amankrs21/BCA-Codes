// Program for multidimensional array

import java.util.*;
public class lab25 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Row : ");
        int row = ar.nextInt();
        System.out.print(" Enter Column : ");
        int column = ar.nextInt();

        int array[][] = new int[row][column];
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(" Enter Element : ");
                array[i][j] = ar.nextInt();
            }
        }
        ar.close();

        System.out.println("\n Elements of the Array are :- ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print("\t"+array[i][j]);
            }
            System.out.println();
        }
    }
}
