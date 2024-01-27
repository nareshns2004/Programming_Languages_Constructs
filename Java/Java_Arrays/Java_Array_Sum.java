import java.util.*;
class Array
{

    public static void main(String args[])
    {
        
    System.out.println("Enter Array Size");  
    Scanner read = new Scanner(System.in);
    int sze = read.nextInt();
    int arr[];
    arr = new int[sze];
    int sum=0;

    System.out.println("Enter Array Elements");

    for(int i=0;i<arr.length;i++)             // Array Intialization
    {
        arr[i]=read.nextInt();
    } 

    for(int i=0;i<arr.length;i++)            // Array Sum Calculation
    {
        sum+=arr[i];
    } 

    System.out.println("Sum of the Array is : "+ sum);

    }

}