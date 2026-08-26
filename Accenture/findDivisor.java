import java.util.ArrayList;
import java.util.Scanner;

public class findDivisor {
    public static int find(int val){
        int sum = 0;

        for(int i = 1 ; i <= val ; i++){
            if(val%i == 0){
                sum += i;
            }
        }
        return sum;
    }
    public static void main(String arg[]) {
        Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();

            // int[] arr = new int[n];
            // for(int i = 0 ; i < n ; i++){
            //     arr[i] = sc.nextInt();
            // }

            int res = find(n);

            System.out.print("ans is : " + res);

            // for(int val : res){
            //     System.out.print(val + " ");
            // }
    }
}
