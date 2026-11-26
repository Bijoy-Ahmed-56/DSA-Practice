class Student {
    public String name;
    int age;

    Student(String n, int y) {
        this.name = n;
        this.age = y;
    }

    void display() {
        System.out.println(name);
        System.out.println(age);
    }
}

public class Constructor {
    public static void main(String[] args) {
        // student s = new student();
        Student s1 = new Student("Bijoy", 23);
        s1.display();
    }
}
