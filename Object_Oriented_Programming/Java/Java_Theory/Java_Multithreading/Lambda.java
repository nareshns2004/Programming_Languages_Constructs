public class Lambda {
    public static void main(String[] args) {
        Runnable runnable = () -> {
            System.out.println("Hello");
        };

        Thread t1 = new Thread(runnable);
        t1.start();
    }
}
