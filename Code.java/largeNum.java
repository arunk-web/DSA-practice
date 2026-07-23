
// USING FUNCTIONS............
// public class largeNum{
//     public static int getLargest(int numbers[]){
//         int largest = Integer.MIN_VALUE;

//         for(int i = 0 ; i < numbers.length ; i++){
//             if(numbers[i] > largest){
//                 largest = numbers[i];
//             }
//         }
//         return largest;

//     }
//     public static void main(String[] args){
//         int numbers[] = {1,2,6,3,5};
//         getLargest(numbers);

//         System.out.println("largest value is: " + getLargest(numbers));



//     }
// }




public class largeNum{
    public static void main(String[] args){
        int numbers[] = {-1,2,-3,6,8};

        int largest = Integer.MIN_VALUE;
        int smallest = Integer.MAX_VALUE;

        for(int i = 0 ; i < numbers.length ; i++){
            if(numbers[i] > largest){
                largest = numbers[i];
            }

            if(numbers[i] < smallest){
                smallest = numbers[i];
            }
        }

        System.out.println("largest value is : " + largest);
        System.out.println("smallest value is : " + smallest);
        // return largest;


        
    }
}