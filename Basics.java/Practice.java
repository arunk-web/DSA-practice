



import java.util.*;


class practice {

    public static int[] printArr(int arr[]) {

        int n = arr.length;

        int k = 0 ;
        int temp[] = new int[n];

        for(int i = 0 ; i < arr.length ; i++ ) {
            if(arr[i] % 2 != 0) {
                temp[k] = arr[i];
                k++;

            }
        }
        return temp;
    }


    public static void newArr(int temp[] ) {

        for(int i = 0 ; i < temp.length ; i++) {

            System.out.print(temp[i]+" ");
        }
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size: ");
        int n = sc.nextInt();

        int arr[] = new int[n] ;

        System.out.print("Enter " + n + " Elements");

        for(int i = 0 ; i < arr.length ; i++) {
            arr[i] = sc.nextInt();
        }
        
        // int arr[] = {1,2,3,4,5,6,7,8,9};



        // printArr(arr);

        int temp[] = printArr(arr);

        System.out.print("New Array: ");
        newArr(temp);

        
        
    
    }

}