// Program for Constructor Overloading

import java.util.*;
public class lab17 {
    String vechile_company;
    int vechile_no;
    String vechile_name;
    lab17(String co){
        vechile_company = co;
    }
    lab17(int no, String na){
        vechile_no = no;
        vechile_name = na;
    }
    void display(){
        System.out.println("\n Vechile Company :- "+vechile_company);
    }
    void display1(){
        System.out.println(" Vechile Name :- "+vechile_name);
        System.out.println(" Vechile Number :- "+vechile_no);
    }

    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        
        System.out.print("\n Enter Vechile Company : ");
        String comp = ar.nextLine();
        System.out.print(" Enter Vechile Name : ");
        String name = ar.nextLine();
        System.out.print(" Enter Vechile Number : ");
        int num = ar.nextInt();
        ar.close();

        // Now creating an Object
        lab17 obj = new lab17(comp);
        lab17 obj1 = new lab17(num, name);

        obj.display();
        obj1.display1();
    }
}
