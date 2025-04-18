interface bikes {
    void views();
}

class ask implements bikes {
    public void views() {
        System.out.println("What do you think about Bikes..?");
    }
}

class choice implements bikes {
    public void views() {
        System.out.println(" I always preffered Car over Bike..");
    }
}

// Using interface: by third user
class interfaceexa {
    public static void main(String[] args) {
        bikes d = new ask();
        bikes e = new choice();
        d.views();
        e.views();
    }
}
