class Person {
    public String name;
    public int age;

    public void displayInfo(String name, int age) {
        this.name = name;
        this.age = age;
        // System.out.println(name);
        // System.out.println(age);
    }
}

class student extends Person {
    public int stId;

    public student(String name, int age, int id) {
        super();
        super.displayInfo(name, age);
        this.stId = id;
    }

    // public int getId() {
    // // return stId;
    //
    // }
    public void getInfo() {

        System.out.println(super.name);
        System.out.println(super.age);
        System.out.println(stId);
    }
}

public class Inheritance {
    public static void main(String[] args) {
        student s = new student("BIJoy", 10, 10);
        // s.setId(10);
        // System.out.println(s.getId());
        // s.displayInfo();
        s.getInfo();
    }
}
