


public class checkArr {
    public static boolean checkSorted(int arr[]) {

        for(int i = 1 ; i < arr.length ; i++ ){
            if(arr[i] >= arr[i-1]){
             
            } else {
                return false;
            }
        }
        return true;
    }
    public static void main(String args[] ){

        int arr[] = {1,3,7,11};


        System.out.println("Answer: " + checkSorted(arr));
    }
}
