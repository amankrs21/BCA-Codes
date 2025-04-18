// Program to Construct 2-D Array

import java.util.*;
public class array_2D {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Row : ");
        int row = ar.nextInt();
        System.out.print(" Enter Column : ");
        int col = ar.nextInt();
        System.out.println();

        int matrix[][] = new int[row][col];

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print(" Enter Elemets : ");
                matrix[i][j] = ar.nextInt();
            }
        }

        System.out.println("\n Your Matrix is :- ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                System.out.print("\t"+matrix[i][j]);
            }
            System.out.println();
        }
    }
}
