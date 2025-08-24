package java;

public class Main {
    
    public static void main(String[] args){
        A a = new A();

        MyThread t1 = new MyThread(a);
        MyThread t2 = new MyThread(a);

        t1.start();
        t2.start();

        try {
            t1.join();
            t2.join();
        } catch (Exception e) {
        }

        System.out.println(a.getCount());

    }
}
