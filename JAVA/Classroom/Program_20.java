// Program to find area of circle, square and rectangle. (Method Overloading)

public class Program_20
{
    public static void main(String[] args)
    {
        Circle obj1 = new Circle();
        obj1.Area(3);
        obj1.Area(5.5);
        Square obj2 = new Square();
        obj2.Area(20);
        obj2.Area(5.2);
        Rectangle obj = new Rectangle();
        obj.Area(30, 20);
        obj.Area(12.5, 4.5);
        
    }
}
class Square 
{
    void Area(double side)
    {
        System.out.println("\n Area of the Square: "+ side * side);
    }
    void Area(float side)
    {
        System.out.println("\n Area of the Square: "+ side * side);
    }
}
class Circle 
{
    static final double PI = Math.PI;
  
    void Area(double r)
    {
        double A = PI * r * r;
  
        System.out.println("\n The area of the circle is : " + A);
    }
  
    void Area(float r)
    {
        double A = PI * r * r;
  
        System.out.println("\n The area of the circle is : " + A);
    }
}
class Rectangle 
{
    void Area(double l, double b)
    {
        System.out.println("\n Area of the rectangle: " + l * b);
    }
    void Area(int l, int b)
    {
        System.out.println("\n Area of the rectangle: " + l * b);
    }
}
