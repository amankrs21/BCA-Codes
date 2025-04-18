// Program for Multilevel Inheritance

class pu {
    void university(){
        System.out.println("\n We are Studying in Parul University");
    }
}

class pica extends pu {
    void college() {
        System.out.println("\n We are Studying in Parul Institute of Computer Application");
    }
}

class bca extends pica {
    void departement() {
        System.out.println("\n We are Studing in BCA Department");
    }
}

public class Inherit_multilevel {
    public static void main(String[] args) {
        bca ar = new bca();
        ar.university();
        ar.college();
        ar.departement();
    }
}
