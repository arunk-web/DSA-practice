

class rotateArrybyD {
    public static void rotate(int[] arr, int k) {
        
        k = k % arr.length;
        int start = arr.length-k ;
        int end = arr.length-1 ;
        
        
        while(start < end) {
            int temp = arr[start];
            arr[start] = arr[end-1];
            arr[end-1] = temp;
            
            
            start++;
            end--;

        }
        
        int start1 = 0 ;
        int end1 = k-1; 
        while(start1 <= end1) {
            int temp = arr[start1];
            arr[start1] = arr[end1];
            arr[end1] = temp;
            
            
            start1++;
            end1--;
        }
        
        int start2 = 0 ;
        int end2 = arr.length-1;
        
        while(start2 <= end2) {
            int temp = arr[start2];
            arr[start2] = arr[end2];
            arr[end2] = temp;
            
            start2++;
            end2--;
            
        }    
    }



    public static void printArr(int arr[]) {
        for(int i = 0 ; i < arr.length ; i++){
            System.out.print(arr[i]+" ");
        }
    }


    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,7};


                rotate(arr,3);

                printArr(arr);
        }
    }









    // rotate array by "d" detailed solutions .
    // some extra spaced is used in this approach.





    // public class solutions {

    //     public static void rotateArray(int arr[] , int d , int n) {
    
    //         // firslty store the element of the array into new array temp(say).
    //         // int temp[] = {1,2,3};
    //         int temp[] = new int[3];
    //         int j = 0;
    //         for(int i = 0 ; i < d ; i++) {
    //             temp[j] = arr[i];
    //             j++;
    //         } 
    
    //         // then shift the remaining elements at the new position.
    //         for(int i = d ; i < n ; i++) {
    //             arr[i-d] = arr[i];
    //         }
    
    //         // now the spaces is becomes empty in the last of array. now put back the elements of temp into that array.
    //         for(int i = (n-d) ; i < n ; i++) {
    //             arr[i] = temp[i-(n-d)];
    //         }
    
    //         // second approach to put elements back into the new array
    //         // int j = 0;
    //         // for(int i = n-d ; i < n ; i++) {
    //         //     arr[i] = temp[j];
    //         //     j++;
    //         // }
    
    
    //     }
    
    
    //     public static void printArr(int arr[]) {
    //         for(int i = 0 ; i < arr.length ; i++) {
    //             System.out.print(arr[i]+" ");
    //         }
    //     }
    
    //     public static void main(String[] args) {
            
    //         int arr[] = {1,2,3,4,5,6,7};
    
    //         int d = 3;
    
    
    //         rotateArray(arr, d, 7);
    
    //         System.out.print("New array will be: ");
    //             printArr(arr);
    
    
    
    //     }
    // }








    


    // without using any extra space;;;;;;;;;;;








    // public class solutions {

    //     public static void swap(int arr[], int i , int j) {
    //         int temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //     }
    
    //     public static void reverse(int arr[], int i , int j) {
    //         while(i < j) {
    //             swap(arr,i,j);
    //             i++;
    //             j--;
                
    //         }
    //     }
    //     public static void rotateArr(int arr[],int n , int d) {
    
    //         d = d%n;
    //         reverse(arr,0,n-d-1);
    //         reverse(arr,n-d,n-1);
    //         reverse(arr,0,n-1);
    //     }
    
    
    
    //     public static void printArr(int arr[]) {
    //         for(int i = 0 ; i < arr.length ; i++) {
    //             System.out.print(arr[i]+" ");
    //         }
    //     }
    //     public static void main(String[] args) {
            
    //         int arr[] = {1,2,3,4,5,6,7};
    
    //         rotateArr(arr, 7, 5);
    //         System.out.print("Modified array: ");
    //         printArr(arr);
    
    
    //     }
    // }
