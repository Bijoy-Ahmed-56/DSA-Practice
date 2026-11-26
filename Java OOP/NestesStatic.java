class University {
    static class Department {
        void display() {
            System.out.println("Inner class ");
        }
    }
}

public class NestesStatic {
    public static void main(String[] args) {

        University.Department in = new University.Department();

        in.display();

    }

}
