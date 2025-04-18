// Program to use Super Keyword

class Animal {
    String color = "White";
}

class Dog extends Animal {
    String color = "Black";

    void printColor() {
        System.out.println("\n Color of Dog Class -> "+color);
        System.out.println("\n Color of Animal Class -> "+super.color);
    }
}

class Program_23 {
    public static void main(String args[]) {
        Dog d = new Dog();
        d.printColor();
    }
}