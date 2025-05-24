class Pairs{

    public static void printPairs(int numbers[]){
        int cnt = 0;
        int min = 0;
        int max = 0;
        int sumL = numbers[0];
        int sumH = numbers[0];


        for(int i=0;i<numbers.length;i++){
            for(int j = i;j<numbers.length;j++){

                for(int k=i;k<=j;k++){
                   // System.out.print(numbers[k] + " ");
                    min+=numbers[k];
                    max+=numbers[k];
                }

                if(min<=sumL){
                    sumL = min;
                }

                if(max>=sumH){
                    sumH = max;
                }

                System.out.println();
            }

            sumL = numbers[0];
            sumH = numbers[0];

            System.out.println();
        }

        System.out.println("Minimum: " + sumL);
        System.out.println("Maximum: " + sumH);

    }
    public static void main(String [] args){
        
        int[] arr = {2, 4, 6, 8, 10};

        printPairs(arr);

    }
}        
        
