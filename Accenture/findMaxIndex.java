import java.util.ArrayList;
import java.util.Scanner;

// find maximum value in an array and its index

public class findMaxIndex{
    public static ArrayList find(int arr[],int n){
        int maxi = -1;
        int index = -1;
        ArrayList<Integer> ll = new ArrayList<>();

        for(int i = 0 ; i < n ; i++){
            if(maxi < arr[i]){
                maxi = arr[i];
                index = i;
            }
        }

        ll.add(maxi);
        ll.add(index);
        return ll;
    }
    
    public static void main(String arg[]) {
        Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();

            int[] arr = new int[n];
            for(int i = 0 ; i < n ; i++){
                arr[i] = sc.nextInt();
            }

            ArrayList<Integer> res = find(arr,n);

            for(int val : res){
                System.out.print(val + " ");
            }
    }
}










