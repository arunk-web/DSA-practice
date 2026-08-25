
import java.util.*;

public class secLar {
    public static int find(int arr[] , int n){
        int first = -1;
        int sec = -1;

        for(int i = 0 ; i < n ; i++){
            if(arr[i] > first){
                sec = first;
                first = arr[i];
            }
            else if(arr[i] > sec && arr[i] < first){
                sec = arr[i];
            }
        }
        return sec;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println(find(arr,n));

    }
}
