// program for constructor overloading

public class Program_16 {
    int id;  
    String name;  
  
    Program_16(){
        System.out.println("\n This is a default constructor");  
    }  
    
    Program_16(int i, String n){  
        id = i;  
        name = n;  
    }  
    
    public static void main(String[] args) {  
        Program_16 s = new Program_16();  
        System.out.println(" Default Constructor values: ");  
        System.out.println(" Student Id : "+s.id + "\n Student Name : "+s.name);  
        
        System.out.println("\n Parameterized Constructor values: ");  
        Program_16 Student = new Program_16(10, "David");  
        System.out.println(" Student Id : "+Student.id + "\n Student Name : "+Student.name); 
    }  
}
