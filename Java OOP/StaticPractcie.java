class Student{
    static int count = 0;
    String name ;
    Student(String name){
        count++;
        this.name = name;
    }

    static void showCount(){
        System.out.println("Total student "+count);
    }
}


public class StaticPractcie {
    public static void main(String[] args) {

        Student A = new Student("Bijoy");
        Student B = new Student("Rahim");
        Student C = new Student("Karim");

        Student.showCount();
        
    }
}
