// Program to sorting array in the Descending Order

import java.util.Scanner;

public class array_descending {
    public static void main(String[] args) {
        
        int[] numbers = new int[10];

        Scanner ar = new Scanner(System.in);
        
        for (int i = 0; i < 5; i++) {
            System.out.print(" Enter Elements of Array : ");
            numbers[i] = ar.nextInt();
        }

        ar.close();
        
        System.out.print("\n Original Elements of Array is -> ");
        for (int i = 0; i < 5; i++) {
            System.out.print(numbers[i]+", ");
        }

        // logic to sorting array in the Descending Order
        for (int i = 0; i < 5; i++) {
            for (int j = i+1; j < 5; j++) {
                if (numbers[i] < numbers[j]) {
                    int temp = numbers[j];
                    numbers[j] = numbers[i];
                    numbers[i] = temp;
                }
            }
        }

        System.out.print("\n\n Array after sorting in Descending Order -> ");
        for (int i = 0; i < 5; i++) {
            System.out.print(numbers[i]+", ");
        }
        System.out.println();
    }
}
