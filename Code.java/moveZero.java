public class moveZero {

    public static void move(int arr[]) {

        int i = 0;
        for(int j = i+1 ; j < arr.length ; i++) {
            if(arr[i] == 0 && arr[j] > 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }
        }
    }


    public static void printArr(int arr[]) {

        for(int i = 0 ; i < arr.length ; i++ ){

            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args) {
        
        int arr[] = {0,1,0,3,12};

        move(arr);
        System.out.print("New array: ");
        // printArr(arr);


    }
}
