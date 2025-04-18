// Program to Sorting array using methods

import java.util.*;
public class sort {
    
    void print(int[] a){
        for (int i = 0; i < a.length; i++) {
            System.out.print(" "+a[i]+", ");
        }
        System.out.println();
    }

    void bubble(int[] a){
        for (int i = 0; i < a.length-1; i++) {
            for (int j = 0; j < a.length-1-i; j++) {
                if (a[j] > a[j+1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        sort obj = new sort();
        obj.print(a);
    }

    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        sort obj = new sort();
        
        System.out.print("\n Enter Size of Array : ");
        int size = ar.nextInt();
        System.out.println();

        int[] array = new int[size];
        for (int i = 0; i < array.length; i++) {
            System.out.print(" Enter Element of Array : ");
            array[i] = ar.nextInt();
        }
        ar.close();

        System.out.println("\n Original Array is :- ");
        obj.print(array);

        System.out.println("\n After Sorting Array :- ");
        obj.bubble(array);
    }
}
