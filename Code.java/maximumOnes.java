public class maximumOnes {
    public static int maxiOnes(int arr[]) {

        int count = 0;
        int Max = 0;

        for(int i = 0 ; i < arr.length ; i++) {
            if(arr[i] == 1) {
                count++;
                Max = Math.max(count,Max);
            } else {
                count = 0;
            }
            // Max = Math.max(count,Max);
        }
        return Max;
    }
    public static void main(String[] args) {

        int arr[] = {1,1,1,1,1,0,1,1,1,1,0,1};

        int result= maxiOnes(arr);
        
        System.out.println("Ans: " + result);
    }
}
