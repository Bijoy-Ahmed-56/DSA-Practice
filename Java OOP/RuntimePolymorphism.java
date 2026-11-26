class Shape{
    void draw(){
        System.out.println("Drawing shape....");
    }
}

class Circle extends Shape{
    @Override 
    void draw(){
        System.out.println("Circle drawing...");
    }
}

public class RuntimePolymorphism {
    public static void main(String[] args) {
        Shape a = new Circle();  // Runtime Polymorphism
        a.draw();
    }
}
