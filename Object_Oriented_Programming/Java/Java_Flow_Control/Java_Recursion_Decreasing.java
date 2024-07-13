import java.util.*;

class Order
{
    public static int Decreasing(int n)
    {
        if(n==0)                            // Base condition of recursive call
        {
            return 0;
        }

        System.out.print(n+" ");
        Decreasing(n-1);                    // Recursive Function
        return 0;
    }
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        int n = sc.nextInt();
        Decreasing(n);

    }

}