class Student{
    public 
    String name;
    int age ;

    void setData(String a , int b){
        this.name = a;
        this.age = b;
    }

    void display (){
        System.out.println("name " + name );
        System.out.println("age "+age);
    }
}


public class ClassAndObject {
    public static void main(String[] args) {
        // Student s("Bijoy", 23);
        // Student s1,s2 = new Student(); // It will show error 

        Student s1 = new Student(), s2 = new Student();
        //s.setData("Bijoy",3);
        s1.setData("Bijoy", 23);
        s1.display();

        // Student s2 = new Student();
        s2.setData("Rahim", 23);
        s2.display();
    }
}