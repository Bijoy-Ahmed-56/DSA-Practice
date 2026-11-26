class Vehicle {
    void run() {
        System.out.println("Vehicle start");
    }
}

public class AnonymousInnerClass {
    public static void main(String[] args) {

        Vehicle v = new Vehicle() {
            @Override
            void run() {
                System.out.println("Cycle run ");
            }
        };

        v.run();

    }

}
