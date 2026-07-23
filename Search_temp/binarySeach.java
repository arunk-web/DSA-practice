// package Search.java;
// import java.util.*;
public class binarySeach {

    public static int binaryySearch(int numbers[] , int key){
        int start = 0;
        int end = numbers.length - 1 ;

        while(start <= end){
            int mid = (start + end)/2 ;
            if(numbers[mid] == key) {
                return mid ;
                } 
            if(numbers[mid] < key) {
                start = mid + 1 ;
            } else {
                end = mid - 1;
}
                }
        return -1;
    }
    public static void main(String[] args){
        // Scanner sc = new Scanner(System.in);
        int numbers[] = {2,4,6,8,10,12,14};
        int key = 18;

        System.out.println("index for key is : " +binaryySearch(numbers, key)); 
    }
}
