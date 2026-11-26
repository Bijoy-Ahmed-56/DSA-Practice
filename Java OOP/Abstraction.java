// show necessary function to users hide details
// there is two way abstract class and interface

// abstract class

abstract class Animal {
    abstract void show();

    public void sleep() {
        System.out.println("Animal is sleeping  ");
    }
}

class dog extends Animal {
    @Override
    void show() {
        System.out.println("Animal inherite ");
    }
}

public class Abstraction {
    public static void main(String[] args) {
        // Animal a = new Animal(); // can not create abstraction function directly

        // We have to use child class for access
        dog d = new dog();
        d.show();
        d.sleep();

    };
}
