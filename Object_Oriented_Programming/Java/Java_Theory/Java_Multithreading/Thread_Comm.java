
class SharedResource{
    private int data;
    private boolean hasData;

    public synchronized void produce(int value){
        while(hasData){
            try {
                wait();
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }

        data = value;
        hasData = true;
        System.out.println("Produced: " + value);
        notify();
    }

    public synchronized int consume(){
            while(!hasData){
                try {
                    wait();
                } catch (InterruptedException e) {
                    Thread.currentThread().interrupt();
                }
            }

            hasData = false;
            System.out.println("Consume: " + data);
            notify();
            return data;

    }
}

class Producer implements Runnable{

    private SharedResource resource;

    public Producer(SharedResource resource){
        this.resource = resource;
    }

    public void run(){
        for(int i=0;i<10;i++){
            resource.produce(i);
            System.out.println("Produced: " + i);
        }
    }
}

class Consumer implements Runnable{

    private SharedResource resource;

    public Consumer(SharedResource resource){
        this.resource = resource;
    }

    public void run(){
        for(int i=0;i<10;i++){
            resource.produce(i);
            System.out.println("Consume: " + i);
        }
    }
}

public class Thread_Comm {
    
    public static void main(String[] args) {
        SharedResource resource = new SharedResource();
        Thread producerThread = new Thread(new Producer(resource));
        Thread consumerThread = new Thread(new Consumer(resource));

        producerThread.start();
        consumerThread.start();
    }
}
