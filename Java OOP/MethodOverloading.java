class Calculator {
    int a, b, c;
    double x, y;

    public int Multiply(int a, int b) {
        this.a = a;
        this.b = b;
        return a * b;
    }

    public int Multiply(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
        return a * b * c;
    }

    public double Multiply(double a, double b) {
        this.x = a;
        this.y = b;
        return x * y;
    }
}

public class MethodOverloading {
    public static void main(String[] args) {

        Calculator a = new Calculator();
        System.out.println(a.Multiply(10, 20));
        System.out.println(a.Multiply(10, 20, 30));
        System.out.println(a.Multiply(30.0, 40));
    }
}
