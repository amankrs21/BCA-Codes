// Program to implement String Funtions

public class lab34 {
    public static void main(String[] args) {
        String s1 = "Hello";
        String s2 = "hello";

        System.out.println("\n Length of String 1 is :- "+s1.length());
        System.out.println("\n Length of String 2 is :- "+s2.length());

        System.out.println(s1.compareTo(s2));

        s1 = s1.concat(", How are You");
        System.out.println(s1);
    }
}
