class Person {
    public String name = "Bijoy";

}

class Student extends Person {
    public String name = "Rahim";

    public void displayInfo() {
        System.out.println(super.name);
        System.out.println(name);
    }
}

public class Inheritance2 {
    public static void main(String[] args) {
        Student s = new  Student();
        s.displayInfo();

    }
}
