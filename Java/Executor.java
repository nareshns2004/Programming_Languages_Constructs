
import java.util.concurrent.ExecutionException;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class Executor{

    public static void main(String[] args) throws ExecutionException, InterruptedException{

            ScheduledExecutorService exr = Executors.newScheduledThreadPool(1);
            exr.scheduleAtFixedRate(()->System.out.println("Task Executed"), 5, 5, TimeUnit.SECONDS);
           
            exr.schedule(()-> {
                System.out.println("Initiating Shutdowm ..");
                exr.shutdown();
            }, 20, TimeUnit.SECONDS);
            exr.shutdown();
    
    }
}