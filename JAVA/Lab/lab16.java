// Program to build a constructor

import java.util.*;
public class lab16 {
    Long enroll;
    String name;

    // Constructor should always be same name as class name
    lab16(Long e, String n){
        enroll = e;
        name = n;
    }

    // this is the Method
    void display(){
        System.out.println("\n Your Name is :- "+name+"\n Your Enrollnment Number is :- "+enroll);
    }

    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.print("\n Enter Your Name : ");
        String user_name = ar.nextLine();
        System.out.print(" Enter Your Enrollnment Number : ");
        Long user_enroll = ar.nextLong();
        ar.close();

        // Now we will create Object the class
        lab16 obj = new lab16(user_enroll, user_name);
        obj.display();
        // here lab16 is the class name, obj is the object name
        // new keyword is always necessary to create new object
        // lab16(parameter) is the Constructor
        // obj.display() in we are calling method by using object
    }
}
