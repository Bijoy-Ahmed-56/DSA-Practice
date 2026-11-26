class BankAccount {
    private double balance;

    public 
    void deposite(double amount) {
        if (amount > 0) {
            balance += amount;
        }

    }
    public 
    double getBalance(){
        return balance;
    }
}

public class Encapsulation {
    public static void main(String[] args) {
        BankAccount B = new BankAccount();
        B.deposite(1000);
        System.out.println("Total amount "+B.getBalance());
    }
}
