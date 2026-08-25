import java.util.*;

public class removeDuplicates{
    public static ArrayList remove(int arr[], int n){
        ArrayList<Integer> ll = new ArrayList<>();

        HashSet<Integer> st = new HashSet<>();

        for(int i = 0 ; i < n ; i++){
            if(!st.contains(arr[i])){
                ll.add(arr[i]);
                st.add(arr[i]);
            }
        }
        return ll;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++){
            arr[i] = sc.nextInt();
        }

        ArrayList<Integer> ll = remove(arr,n);

        for(int val : ll){
            System.out.print(val + " ");
        }
        System.out.println();
    }
}