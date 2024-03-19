import java.util.*;

public class Selection_Sort {

    public static void readArray(int[] arr, Scanner read)
    {
        for(int i=0; i<arr.length;i++)
        {
            arr[i] = read.nextInt();            // reading the array elements
        }
    }

    public static void selectionSort(int[] arr)
    {
        for(int i=0;i<arr.length-1;i++)
        {
            int minPos = i;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[minPos]>arr[j])
                {
                    
                    minPos = j;
                    
                }
            }

            int temp = arr[i];
            arr[i] = arr[minPos];
            arr[minPos] = temp;

        }
    }

    public static void preDisplayArray(int[] arr)
    {
        System.out.print("The Array before Sorting : ");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    public static void postDisplayArray(int[] arr)
    {
        System.out.print("The Array after Sorting : ");
        for(int i=0;i<arr.length;i++)
        {
            System.out.print(arr[i] + " ");
        }

        System.out.println();
    }

    public static void main(String args[])
    {
        Scanner read = new Scanner(System.in);
        System.out.println("Enter the size of the Array : ");
        int size = read.nextInt();                          // Taking the input size of Array 
        int[] arr = new int[size];

        System.out.println("Enter the Array : ");

        readArray(arr, read);                               // Reading the Array

        preDisplayArray(arr);                               // Array before Sorting

        selectionSort(arr);                                 // Selection Sort function

        postDisplayArray(arr);                              // Array after Sorting

        read.close();
    }
}
