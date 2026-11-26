interface Payment{
    void pay(); // abstract methods
    
    
    default void receipt(){  // default methods
        System.out.println("payment done ");
    }
}

class Bkash implements Payment{
    @Override 
    public void pay(){
        System.out.println("By Bkash");
    }
}

public class InterfaceDefault {
    public static void main(String[] args) {

        Bkash money = new Bkash();
        money.pay();
        money.receipt();
        
    }
}
