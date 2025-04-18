// Program to find area of rectangle, circle and Square by using method Overloading

public class lab21 {
    void area(double radius){
        double area_circle;
        area_circle = 3.14*(radius*radius);
        System.out.println("\n Area of Circle is -> "+area_circle);
    }
    void area(int len, int bre){
        int area_rec;
        area_rec = 2 * (len * bre);
        System.out.println("\n Area of Rectangle is -> "+area_rec);
    }
    void area(int side){
        int area_square;
        area_square = side * side;
        System.out.println("\n Area of Square is -> "+area_square);
    }
    public static void main(String[] args) {
        lab21 obj = new lab21();

        obj.area(21.4);
        obj.area(21, 4);
        obj.area(21);
    }
}
