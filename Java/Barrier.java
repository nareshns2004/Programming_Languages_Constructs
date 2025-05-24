
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutionException;

public class Barrier {
    
    public static void main(String[] args) {
       CompletableFuture<String> cf = CompletableFuture.supplyAsync(() -> {

            try {
                Thread.sleep(5000);
            } catch (Exception e) {
            }

            return "ok";
        } ); 

        String s = null;
        try {
            s = cf.get();
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        } catch (ExecutionException e){
            throw new RuntimeException(e);
        }

        System.out.println(s);
        System.out.println("Main");
    }
}
