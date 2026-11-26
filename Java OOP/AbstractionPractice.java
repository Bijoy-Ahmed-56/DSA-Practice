abstract class Shape {
    abstract void calculateArea();  // No body
    void display(){
        System.out.println("Normal method ");
    }
}

class Circle extends Shape {
    @Override
    void calculateArea() {  // must be implemented
        double radius = 5;
        double area = Math.PI * radius * radius;
        System.out.println("Circle Area " + area);
    }

}

public class AbstractionPractice {
    public static void main(String[] args) {
        Circle c = new Circle();
        c.calculateArea();
        c.display();
    }
}
