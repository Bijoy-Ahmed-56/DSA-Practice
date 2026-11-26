class Product {
    String productName;
    int price;

    Product(String name, int price) {
        this.productName = name;
        this.price = price;

    }

    @Override
    public String toString() {
        return "Product name " + productName + ", price " + price;
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
        return this.productName.equals(other.productName) && this.price == other.price;
    }

    @Override
    public int hashCode() {
        return java.util.Objects.hash(productName, price);
    }

}

public class ObjectClassMethod {
    public static void main(String[] args) {

        Product p1 = new Product("Laptop", 1000);
        Product p2 = new Product("Laptop", 1000);
        Product p3 = new Product("Mouse", 500);

        System.out.println(p1);

        System.out.println(p1.equals(p2));
        System.out.println(p1.equals(p3));

        System.out.println(p1.hashCode());
        System.out.println(p2.hashCode());

    }

}
