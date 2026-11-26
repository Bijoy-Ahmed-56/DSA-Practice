class Student {
    String name;
    static String university = "SWPU"; // static variable

    Student(String name) {
        this.name = name;
    }

    void display() {
        System.out.println(name + " - " + university);
    }
}

public class StaticMember {
    public static void main(String[] args) {
        Student s1 = new Student("Bijoy");
        Student s2 = new Student("Rahim");

        s1.display();
        s2.display();

        // we can access static variable by class name
        // Student.university;
        System.out.println(Student.university);
    }
}
