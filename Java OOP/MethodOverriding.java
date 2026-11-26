class Vehicle {
    public void start() {
        System.out.println("Vehicle starting ....");
    }
}

class Car extends Vehicle {
    @Override
    public void start() {
        System.out.println("Car starting .....");
    }
}

public class MethodOverriding {
    public static void main(String[] args) {

        Car c = new Car();
        c.start(); // Car starting.....
    }
}
