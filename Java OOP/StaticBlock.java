class Student {
    static {
        System.out.println("Static Block Executed");
    }

    Student() {
        System.out.println("Constructor Executed");
    }
}

public class StaticBlock {
    public static void main(String[] args) {
        System.out.println("MAIN METHOD STARTED");
        Student s1 = new Student();
        Student s2 = new Student();
    }
}
