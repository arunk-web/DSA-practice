import java.util.*;
                
public class findIntersection{
    public static ArrayList<Integer> update(int arr1[],int arr2[],int n,int m){
        ArrayList<Integer> ll = new ArrayList<>();
        HashSet<Integer> st = new HashSet<>();

        for(int i = 0 ; i < n ; i++){
            st.add(arr1[i]);
        }

        for(int i = 0 ; i < m ; i++){
            if(st.contains(arr2[i])){
                ll.add(arr2[i]);
            }
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

        ArrayList<Integer> finalAns = update(arr1,arr2, n, m);

        for(int i = 0 ; i < finalAns.size() ; i++){
            System.out.println(finalAns.get(i));
        }

    }
}