class Product {
    String productName;
    int price;

    Product(String name, int price) {
        this.productName = name;
        this.price = price;
    }

    @Override
    public boolean equals(Object obj) {

        if (this == obj) {
            return true;
        }

        if (!(obj instanceof Product)) {
            return false;
        }

        Product other = (Product) obj;

        return this.productName.equals(other.productName)
                && this.price == other.price;
    }
}

public class EqualMethod2 {
    public static void main(String[] args) {

        Product P1 = new Product("Laptop", 1000);
        Product P2 = new Product("Laptop", 1000);
        Product P3 = new Product("Mouse", 500);

        System.out.println(P1.equals(P2));
        System.out.println(P1.equals(P3));
        System.out.println(P1.equals(P1));
        System.out.println(P1.equals(null));
    }
}