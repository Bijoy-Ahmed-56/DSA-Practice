class Products {
    String productName;
    int price;

    Products(String name, int price) {
        this.productName = name;
        this.price = price;
    }

    @Override
    public String toString() {
        return "Name " + productName + ", price " + price;
    }
}

public class ToString {
    public static void main(String[] args) {

        Products p = new Products("Laptop", 100);
        System.out.println(p);

    }

}
