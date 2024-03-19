import java.util.*;

class Bubble_Sort
{
    public static void readingArray(int[] arr, Scanner read)
    {

        for(int i=0;i<arr.length;i++)
        {
            arr[i]=read.nextInt();      
        }

    }

    public static void bubbleSort(int[] arr)
    {
        
        int cnt = 0;                    // Counter to check if Array is already Sorted
        for(int j=0;j<arr.length-1;j++)
        {
            for(int k=0;k<arr.length-1-j;k++)
            {
                if(arr[k]>arr[k+1])
                {
                    int temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                    cnt++;                // Counter to check, If there is no Swapping, Indicating Array is Sorted
                }

            }
            
            if(cnt==0)
            {
                System.out.println("\n"+"The Array is Sorted"+"\n");
                break;                   // Checks if it's Sorted Array, Will reduce complexity from O(n^2) to O(n)
                
            }
            
        }

    }

    public static void preDisplayArray(int [] arr)
    {
        System.out.print("Array Before Sorting : ");

        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    public static void postDisplayArray(int [] arr)
    {
        System.out.print("Array After Sorting : ");

        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }


    public static void main(String args[])
    {
        System.out.println("Enter the size of the array"); 
        Scanner read = new Scanner(System.in);                   
        int size = read.nextInt();                          // Size of the Array to be read
        
        System.out.println("Enter the Numbers :");
        int [] arr = new int[size];                         // Declaring the Array

                                               
        readingArray(arr, read);                            // Reading the Array Elements
       
        read.close();                                       // Closing the Scanner
        
        preDisplayArray(arr);                               // Before Sorting
        
        bubbleSort(arr);                                    // Sorting the Array

        postDisplayArray(arr);                              // After Sorting
            
    }
}