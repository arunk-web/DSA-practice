import java.util.ArrayList;
import java.util.Scanner;

public class merge {
    public static ArrayList find(int arr1[],int arr2[],int n,int m){
        ArrayList<Integer> ll = new ArrayList<>();
        int i = 0 , j = 0;

        while(i < n && j < m){
            if(arr1[i] <= arr2[j]){
                ll.add(arr1[i]);
                i++;
            }
            else if(arr2[j] <= arr1[i]){
                ll.add(arr2[j]);
                j++;
            }
        }

        while(i < n){
            ll.add(arr1[i]);
            i++;
        }

        while(j < m){
            ll.add(arr2[j]);
            j++;
        }

        return ll;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int[] arr1 = new int[n];
        int[] arr2 = new int[m];


        for(int i = 0 ; i < n ; i++){
            arr1[i] = sc.nextInt();
        }

        for(int i = 0 ; i < m ; i++){
            arr2[i] = sc.nextInt();
        }

        ArrayList<Integer> ll = find(arr1,arr2,n,m);


        for(int val : ll){
            System.out.print(val + " ");
        }
    }
}
