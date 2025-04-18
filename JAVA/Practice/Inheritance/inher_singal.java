//single inheritance example

class Shape {
    int length, breadth, height;
}

public class inher_singal extends Shape {
    int vol;

    public void volume() {
        vol = length * breadth * height;
    }

    public static void main(String args[]) {
        inher_singal b = new inher_singal();
        // Assigning values to Shape class attributes
        b.length = 10;
        b.breadth = 20;
        b.height = 2;
        // Calculate the volume
        b.volume();
        System.out.println("The length of the box is-" + b.length);
        System.out.println("The breadth of the box is-" + b.breadth);
        System.out.println("The height of the box is-" + b.height);
        System.out.println("The volume of the box is-" + b.vol);
    }
}
