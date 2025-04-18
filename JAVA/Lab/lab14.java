// Program to use do while loop;

import java.util.*;
public class lab14 {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Number to Find Table : ");
        int number = ar.nextInt();
        ar.close();

        int row = 1;
        do{
            System.out.print("\n\t "+number+" * "+row+" = "+(number*row));
            row++;
        }while(row <= 10);
        
        System.out.println();
    }
}
