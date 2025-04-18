// Program to implement interface

interface bikes {
    void views();
}

class ask implements bikes {
    public void views() {
        System.out.println("\n What do you think about Bikes..?");
    }
}

class choice implements bikes {
    public void views() {
        System.out.println("\n I always preffered Car over Bike..");
    }
}

// Using interface: by third user
class Program_22 {
    public static void main(String[] args) {
        bikes d = new ask();
        bikes e = new choice();
        d.views();
        e.views();
    }
}
