import java.util.*;
public class matrix_mul {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);

        System.out.print("\n Enter Row for Matrix 1 : ");
        int r1 = ar.nextInt();
        System.out.print(" Enter Column for Matrix 1 : ");
        int c1 = ar.nextInt();
        System.out.print("\n Enter Row for Matrix 2 : ");
        int r2 = ar.nextInt();
        System.out.print(" Enter Column for Matrix 2 : ");
        int c2 = ar.nextInt();

        if (c1 == r2) {
            int[][] matrix1 = new int[r1][c1];
            int[][] matrix2 = new int[r2][c2];
            int[][] multi = new int[r1][c2];

            System.out.println();
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    System.out.print(" Enter Element for Matrix 1 : ");
                    matrix1[i][j] = ar.nextInt();
                }
            }

            System.out.println();
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    System.out.print(" Enter Element for Matrix 2 : ");
                    matrix2[i][j] = ar.nextInt();
                }
            }
            ar.close();

            System.out.println("\n Matrix 1 is :- ");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c1; j++) {
                    System.out.print("\t"+matrix1[i][j]);
                }
                System.out.println();
            }

            System.out.println("\n Matrix 2 is :- ");
            for (int i = 0; i < r2; i++) {
                for (int j = 0; j < c2; j++) {
                    System.out.print("\t"+matrix2[i][j]);
                }
                System.out.println();
            }

            int sum = 0;
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    sum = 0;
                    for (int k = 0; k < r2; k++) {
                        sum += matrix1[i][k] * matrix2[k][j];
                    }
                    multi[i][j] = sum;
                }
            }

            System.out.println("\n Multiplication of Matrix 1 and Matrix 2 is -> ");
            for (int i = 0; i < r1; i++) {
                for (int j = 0; j < c2; j++) {
                    System.out.print("\t"+multi[i][j]);
                }
                System.out.println();
            }
        } else {
            System.out.println("\n Multiplication of Matrix 1 and Matrix 2 is NOT Possible ");
        }
    }
}
