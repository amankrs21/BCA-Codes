class Cloud {
    String n1 = "Cloud";
}
class ThunderStorm extends Cloud{
    void display() {
        System.out.println("\n ThunderStrom Origins from the "+n1);
    }
}
class Rain extends Cloud {
    void display() {
        System.out.println("\n Rain Comes from the "+n1);
    }
}
public class Hierarchical_inherit {
    public static void main(String[] args) {
        ThunderStorm obj1 = new ThunderStorm();
        Rain obj2 = new Rain();
        obj1.display();
        obj2.display();
    }
}
