// Program to print total marks and percentage of 3 Subjects

import java.util.Scanner;

public class student_grade {
    
    public static void main(String[] args) {
        
        int s1, s2, s3, total ;
        float perc;

        Scanner sc = new Scanner(System.in);

        System.out.print("\n Enter Name of Student : ");
        String name = sc.nextLine();

        System.out.println("\n Enter Marks out of 100 ");
        System.out.print(" Enter Marks of 1st Subject : ");
        s1 = sc.nextInt();
        System.out.print(" Enter Marks of 2nd Subject : ");
        s2 = sc.nextInt();
        System.out.print(" Enter Marks of 3rd Subject : ");
        s3 = sc.nextInt();

        sc.close();

        total = s1 + s2 + s3;

        perc = (total * 100) / 300;

        System.out.println("\n Name of S -> "+ name);
        System.out.println(" Subject 1 Marks -> "+ s1);
        System.out.println(" Subject 2 Marks -> "+ s2);
        System.out.println(" Subject 3 Marks -> "+ s3);
        System.out.println(" Total Marks is -> "+ total);
        System.out.println(" Percentage -> "+ perc + "%");

        if (perc >= 60) {
            System.out.println("\n "+name+" has Scored Grade 'A'");
        }
        else if (perc < 60 && perc >= 50) {
            System.out.println("\n "+name+" has Scored Grade 'B'");
        }
        else if (perc < 50 && perc >= 40) {
            System.out.println("\n "+name+" has Scored Grade 'C'");
        }
        else {
            System.out.println("\n "+name+" has Scored Grade 'F'");
        }
    }
}
