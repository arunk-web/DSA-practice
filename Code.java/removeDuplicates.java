public class removeDuplicates {
    public static int removedup(int arr[]) {

        int i = 0;
        for(int j = i + 1 ; j < arr.length ; j++) {
            if(arr[j] != arr[i]){
                arr[i+1] = arr[j];
                i++;
            }
        }

        return i+1;
    }

    public static void main(String[] args) {
        
        int arr[] = {1,1,3,3,5,7,7};

        

        System.out.println("New Array: " + removedup(arr));
        
    }
}

// public class removeDuplicate{
//     public static int remove(int arr[]) {

//         int index = 0;
//         for(int i = 0 ; i < arr.length ; i++) {
//             if(arr[i-1] != arr[i]){
//                 arr[index] = arr[i-1];
//                 index++;
//             }
//         }
//         return index;
        
//     }
//     public static void main(String[] args) {

//         int arr[] =  {1,2,2,3,4,4,5};

//         System.out.println("Answer: " + remove(arr));
        
//     }
// }
