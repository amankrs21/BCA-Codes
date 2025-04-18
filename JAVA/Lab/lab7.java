// Program to Print Various type of Pattern

import java.util.*;
public class lab7 {
    public static void main(String[] args) {
        int row;
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter the Row : ");
        row = ar.nextInt();
        ar.close();

        System.out.println("\n Patter Number 1");
        for (int i = 1; i < row; i++) {
            for (int j=row-i; j>=1; j--){
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }

        System.out.println("\n Patter Number 2");
        for (int i = 1; i < row; i++) {
            for (int j = 1; j <= i; j++) {
                int num = 64+j;
                char ch = (char)num;
                System.out.print(ch+" ");
            }
            System.out.println();
        }

        System.out.println("\n Patter Number 3");
        for (int i = 1; i < row; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}
