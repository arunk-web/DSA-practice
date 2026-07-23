public class solutions {

    public static void movezeros(int arr[]) {

        int n = arr.length;

        int left = 0 ; 
        int right = n-1;

        while(left < right){
            if(arr[left] == 0 && arr[right] > 0) {
                int temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;
                left++;
                right--;
            }

            
        }

        if(arr[left] > 0){
            left++;
        }

        if(arr[right] == 0) {
            right--;
        }

    }


    public static void printArr(int arr[]) {
        for(int i = 0 ; i < arr.length ; i++) {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args) {

        int arr[] = {1,0,2,3,2,0,0,4,5,1};

        movezeros(arr);
        System.out.print("Modified array will be: ");
        printArr(arr);


        
    }
}