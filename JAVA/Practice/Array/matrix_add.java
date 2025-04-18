
import java.util.*;

public class matrix_add {
    public static void main(String[] args) {
        
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Row : ");
        int row = ar.nextInt();
        System.out.print(" Enter Column : ");
        int column = ar.nextInt();

        int[][] matrix1 = new int[row][column];
        int[][] matrix2 = new int[row][column];
        int[][] sum = new int[row][column];

        System.out.println();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(" Enter Element for Matrix 1 : ");
                matrix1[i][j] = ar.nextInt();
            }
        }

        System.out.println();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(" Enter Element for Matrix 2 : ");
                matrix2[i][j] = ar.nextInt();
            }
        }
        ar.close();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                sum[i][j] = matrix1[i][j] + matrix1[i][j];
            }
        }

        System.out.println("\n Matrix 1 is :- ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print("\t"+matrix1[i][j]);
            }
            System.out.println();
        }

        System.out.println("\n Matrix 2 is :- ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print("\t"+matrix2[i][j]);
            }
            System.out.println();
        }
        
        System.out.println("\n Sum of Matrix1 and Matrix2 is -> ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print("\t"+sum[i][j]);
            }
            System.out.println();
        }
    }
}
