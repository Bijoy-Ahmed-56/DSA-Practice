class Counter {
    static int count = 0;

    Counter() {
        count++;
    }
}

public class StaticVarable2 {
    public static void main(String[] args) {
        Counter A = new Counter();
        Counter B = new Counter();
        Counter C = new Counter();

        System.out.println(Counter.count);

    }
}
