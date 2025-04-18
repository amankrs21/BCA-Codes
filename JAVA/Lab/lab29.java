// Program to implement abstract class

abstract class music {
    abstract void litshning();
}

class clasical extends music {
    void litshning(){
        System.out.println("\n Litshning Classical Music");
    }
}

class pop extends music {
    void litshning(){
        System.out.println("\n Litshning POP Music");
    }
}

public class lab29 {
    public static void main(String[] args) {
        
        music obj1 = new clasical();
        obj1.litshning();
    }
}
