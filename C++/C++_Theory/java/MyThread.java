package java;

public class MyThread extends Thread{
    private A a;
    public MyThread(A a){
        this.a = a;
    }

    @Override
    public void run(){
        for(int i=0;i<10;i++){
            a.increment();
        }
    }
}
