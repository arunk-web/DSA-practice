public class removeK {
    public static int remove(int arr[] , int val) {

        int index = 0;
        for(int i = 0 ; i < arr.length ; i++) {
            if(arr[i] != val){
                arr[index] = arr[i];
                index++;
            }
        }
        return index;
    }
    public static void main(String[] args) {

        int arr[] = {1,1,3,3,5,7,7};

        int val = 3;

        int value = remove(arr, val);
        
        System.out.println("Answer: " + value);
        
    }
}
