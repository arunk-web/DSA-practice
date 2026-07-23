import java.util.*;

class practice {

        public static int tripletSum(int arr[] , int target) {
            int ans = 0;

            for(int i = 0 ; i <= arr.length - 1 ; i++) {
                for(int j = i + 1 ; j <= arr.length-1 ; j++) {
                    for(int k = j + 1 ; k <= arr.length - 1 ; k++) {
                        if(arr[i] + arr[j] + arr[k] == target) {
                            ans++;
                        }
                    }
                        }
            }
            return ans;
        }
    

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array size");

        int size =  sc.nextInt();

        int arr[] = new int[size];

        System.out.print("Enter "+ size + "Elements");

        for(int i = 0 ; i <= arr.length-1 ; i++ ) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter target sum : ");

        int target = sc.nextInt();

            tripletSum(arr, target);
            System.out.println(tripletSum(arr, target));
    }
}