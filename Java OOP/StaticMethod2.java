interface payMent{
    static  void showPayment(){
        System.out.println("Payment done");
    }

    default void receipt(){
        System.out.println("Recepited done");
    }
}

class Bkash implements payMent{

}


public class StaticMethod2 {
    public static void main(String[] args) {

        Bkash B = new  Bkash();
        B.receipt();
        payMent.showPayment();
        
    }
}
