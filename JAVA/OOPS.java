class Pen{
    String color;
    String type; //ballpen,gel;

    public void write(){
        System.out.println("Writing Something!!");
    }
}

public class OOPS{

    public static void main(String[] args) {
        Pen pen1=new Pen();
        pen1.color="blue";
        pen1.type="gel";


        pen1.write();
    }
}