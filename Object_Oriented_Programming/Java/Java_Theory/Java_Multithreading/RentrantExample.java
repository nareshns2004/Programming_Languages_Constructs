import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class RentrantExample {
    
    private final Lock lock = new ReentrantLock();

    public void outerMethod(){
        lock.lock();

        try {

            System.out.println("outer method");

            innerMethod();

        } catch (Exception e) {

        }

        finally{
            lock.unlock();
        }
    }

    public void innerMethod(){
        lock.lock();

        try {

            System.out.println("Inner Method");

        } catch (Exception e) {

        }

        finally{
            lock.unlock();
        }
    }
    
}
