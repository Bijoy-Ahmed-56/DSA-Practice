interface Playable{
    void play();
}

interface Recordable{
    void record();
}

class SmartPhone implements Playable,Recordable{

    @Override 
    public void play(){
        System.out.println("Playing music");
    }

    @Override  
    public void record(){
        System.out.println("Recording ");
    }
}
public class MultipleInterface {
    public static void main(String[] args) {
        SmartPhone phone = new SmartPhone();

        phone.play();
        phone.record();
    }
}
