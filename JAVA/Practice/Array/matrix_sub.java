
import java.util.Scanner;

public class matrix_sub {
    public static void main(String[] args) {
        
        Scanner aman = new Scanner(System.in);
        System.out.print("\n Enter Row : ");
        int row = aman.nextInt();
        System.out.print(" Enter Column : ");
        int column = aman.nextInt();

        int[][] matrix1 = new int[row][column];
        int[][] matrix2 = new int[row][column];
        int[][] sub = new int[row][column];

        System.out.println();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(" Enter Element for Matrix 1 : ");
                matrix1[i][j] = aman.nextInt();
            }
        }

        System.out.println();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(" Enter Element for Matrix 2 : ");
                matrix2[i][j] = aman.nextInt();
            }
        }
        aman.close();

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

        System.out.println("\n Substraction of Matrix1 and Matrix2 is -> ");
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                sub[i][j] = matrix1[i][j] - matrix2[i][j];
                System.out.print("\t"+sub[i][j]);
            }
            System.out.println();
        }
    }
}
