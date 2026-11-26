class Car {
    void carInfo() {
        class Engine {
            void display() {
                System.out.println("Engine start ");
            }
        }

        Engine obj = new Engine();
        obj.display();
    }
}

public class LocalInnerClass {
    public static void main(String[] args) {

        Car c = new Car();
        c.carInfo();

    }

}
