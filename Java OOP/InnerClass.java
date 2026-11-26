class University {
    class Department {
        void display() {
            System.out.println("Inner class ");
        }
    }
}

public class InnerClass {
    public static void main(String[] args) {

        // University obj = new University();
        // University.Department in = obj.new Department();

        University.Department in = new University().new Department();

        in.display();

    }

}
