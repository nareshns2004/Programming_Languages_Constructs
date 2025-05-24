 class SharedObject{
        private boolean flag = false;

        public void setFlagTrue(){
            flag = true;
        }

        public void printIfFlagTrue(){
            while(!flag){

            }

            System.out.println("Flag is True !");
        }
    }

public class VolatileExample {

   
    public static void main(String[] args) {
       
        SharedObject obj = new SharedObject();
        Thread write = new Thread(() -> {
            obj.setFlagTrue();
        
        });

        Thread rdr = new Thread(() -> {
            obj.printIfFlagTrue();
        });

        

    }
}
