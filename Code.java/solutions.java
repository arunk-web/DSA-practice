public class solutions {
    public static boolean checkSorted(int arr[]) {

        for(int i = 1 ; i < arr.length ; i++) {
            if(arr[i] >= arr[i-1]) {
                
            } else {
                return false ;
            }
        }

        return true;
    }
    public static void main(String[] args) {

        int arr[] = {1,3,3,5,11};

        System.out.println("Answer is: "+ checkSorted(arr));
        
    }
}