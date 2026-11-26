// Final Variable 


class Student {
    final int age = 22;
}

public class FinalVariable {
    public static void main(String[] args) {
        Student s1 = new Student();

        System.out.println(s1.age);
        // s1.age = 25;  // errror
    }
}
