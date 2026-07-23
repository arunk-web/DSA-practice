public class checkArr{

    public static boolean check(int arr[] , int n) {

        for(int i = 0 ; i < n ; i++) {
            for(int j = i + 1 ; j < n ; j++ ){
                if(arr[i] > arr[j]) {
                    return false;
                }
            }
        }
        return true;
    }
    public static void main(String[] args) {
        
        int arr[] = {1,1,2,3,7,4,5,5};

        boolean ans = check(arr, 8);

        System.out.println("Ans: " + ans);
    }
}