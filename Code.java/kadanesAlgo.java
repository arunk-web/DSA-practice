// Find maximum Subarray sum using "Kadane's Algorithm".

public class kadanesAlgo {
        public static void kadanes(int numbers[]){
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;

        for(int i = 0 ; i < numbers.length ; i++){
            currSum = currSum + numbers[i];
            if(currSum < 0){
                currSum = 0;
            }
            maxSum = Math.max(currSum,maxSum);
        }
        System.out.println("Max Subarray sum is : " +maxSum);

    }
    public static void main(String[] args) {
        int numbers[] = {-1,-2,-3,-4};
        kadanes(numbers);
    }

}








