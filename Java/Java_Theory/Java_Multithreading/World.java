

public class World implements Runnable {
    
    @Override
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println(Thread.currentThread().getName());
        }
    }
}
