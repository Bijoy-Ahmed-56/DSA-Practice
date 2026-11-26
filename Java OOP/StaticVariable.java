interface Payment {
    void pay();

    default void receipt() {
        System.out.println("Payment completed");
    }

    // Static method
    static void paymentInfo() {
        System.out.println("Secure Payment System");
    }
}

class Bkash implements Payment {
    @Override
    public void pay() {
        System.out.println("Payment using Bkash");
    }
}

public class StaticVariable{
    public static void main(String[] args) {
        Bkash b = new Bkash();

        b.pay();
        b.receipt();

        Payment.paymentInfo(); // Interface name দিয়ে call
    }
}
