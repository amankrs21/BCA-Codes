// Program for Hierarchical Inheritance

class university {
    void pu() {
        System.out.println("\n I'm Studying in Parul University");
    }
}

class institute extends university {
    void bca() {
        System.out.println("\n BCA is a part of PICA");
    }
}

class departement extends university {
    void mba() {
        System.out.println("\n MBA is part of Business Management");
    }
}

public class Inherit_hieararchical {
    public static void main(String[] args) {
        departement ar = new departement();
        institute as = new institute();
        ar.pu();
        as.bca();
        ar.mba();
    }
}
