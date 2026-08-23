import java.util.*;

public class findMax{

    public static int findmaxele(int arr[],int n){
        int maxi = Integer.MIN_VALUE;

        for(int i = 0 ; i < n ; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        }
        return maxi;
    }
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];

        for(int i = 0 ; i < n ; i++){
            arr[i] = sc.nextInt();
        }

        System.out.println(findmaxele(arr, n));




    }
}