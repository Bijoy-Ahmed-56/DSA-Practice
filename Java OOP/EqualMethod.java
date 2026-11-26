class Product {
    String productName;
    int price;

    Product(String name, int price) {
        this.productName = name;
        this.price = price;
    }

    @Override
    public boolean equals(Object obj) {
        Product other = (Product) obj;
        return this.productName.equals(other.productName)
                && this.price == other.price;
    }

    @Override
    public int hashCode() {
        return java.util.Objects.hash(productName, price);
    }
}

public class EqualMethod {
    public static void main(String[] args) {

        Product P1 = new Product("laptop", 10);
        Product P2 = new Product("laptop", 10);

        System.out.println(P1.equals(P2));
        System.out.println(P1.hashCode());
        System.out.println(P2.hashCode());

    }

}
