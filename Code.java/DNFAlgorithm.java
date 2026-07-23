public class DNFAlgorithm {

    public static int[] DNFAlgo(int arr[] , int n) {
        int low = 0 , mid = 0;
        int high = n-1;

        while(mid <= high) {
            if(arr[mid] == 0) {
                swap(arr,arr[low],arr[mid]);
                    low++ ;
                    mid++; 
                }

                else if (arr[mid] == 1) {
                    mid++;
                }
                else {
                    swap(arr,arr[mid],arr[high]);
                    high--;
                }

        }

        return arr;
    }


    public static void swap(int arr[], int i , int j) {
        int temp = arr[i] ;
        arr[i] = arr[j];
        arr[j] = temp;
    }


        public static void main(String[] args) {


            int arr[] = {1,2,0,2,0,1};


            int ans[] = DNFAlgo(arr, 6);


            for(int i = 0 ; i < ans.length ; i++ ) {
                System.out.print(ans[i]+" ");
            }
        
    }
}
