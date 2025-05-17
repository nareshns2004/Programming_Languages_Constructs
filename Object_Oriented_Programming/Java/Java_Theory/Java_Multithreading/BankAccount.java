import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class BankAccount {

    private int balance = 100;

    private final Lock lock = new ReentrantLock();

    public void withdraw(int amount){
        System.out.println(Thread.currentThread().getName() + " attempting to withdraw " + amount);

       try {

        if(lock.tryLock(1000, TimeUnit.MILLISECONDS)){
            if(balance >= amount){
                try {
                    System.out.println(Thread.currentThread().getName() + " proceed with transaction");
                    Thread.sleep(3000);
                    balance-=amount;
                    System.out.println(Thread.currentThread().getName() + " completed transaction");
                } catch (Exception e) {
                    Thread.currentThread().interrupt();
                }

                finally{
                    lock.unlock();
                }

            }
            else{
                System.out.println(Thread.currentThread().getName() + " insufficient balance");
            }
        }else{
            System.out.println(Thread.currentThread().getName() + " could not acquire lock");
        }
           
       } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
       } 
    }
}
