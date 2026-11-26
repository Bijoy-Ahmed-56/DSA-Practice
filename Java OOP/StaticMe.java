class  Calculator{
    static int value = 100;
    static void showValue(){
        System.out.println(value);
    }

}


public class StaticMe {
    public static void main(String[] args) {
        Calculator.showValue();
        
    }
}
