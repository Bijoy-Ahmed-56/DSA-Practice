class Engine {
    void start() {
        System.out.println("Engine start");
    }
}

class Car {
    Engine bmv;

    Car() {
        bmv = new Engine();
    }

    void display() {
        bmv.start();
    }
}

public class Composition {
    public static void main(String[] args) {

        Car c = new Car();
        c.display();

    }

}
