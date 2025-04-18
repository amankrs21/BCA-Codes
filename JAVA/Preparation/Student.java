import java.util.Scanner;

public class Student {
    Student(int id, String name, int age) {
        System.out.println("\n Student ID is :- "+id);
        System.out.println(" Student Name is :- "+name);
        System.out.println(" Student Age is :- "+age);
    }
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Student's Name : ");
        String name = ar.next();
        System.out.print(" Enter Student's ID : ");
        int id = ar.nextInt();
        System.out.print(" Enter Student's Age : ");
        int age = ar.nextInt();

        new Student(id, name, age);
        ar.close();
    }
}
