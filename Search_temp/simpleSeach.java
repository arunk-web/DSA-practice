
import java.util.*;

public class simpleSeach{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numbers[] = {1,2,3,4,5,6};

        // numbers[] = {1,2,3,4,5,6};

        int x = sc.nextInt();

        for(int i = 0 ; i < numbers.length ; i++){
            if(numbers[i] == x){
                System.out.println("x is found at index : " + i);
            } 
        }
    }
}