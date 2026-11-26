interface Vehicle{
    void start(); // abstract method
}

class car implements Vehicle{  // implements keyword not extends
    @Override 
    public  void start(){  // must use public
        System.out.println("Car starting ");
    }
}

public class JavaInterface {
    public static void main(String[] args) {
        car c = new car();
        c.start();
    }
}
