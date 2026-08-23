import java.util.*;

public class reverseString{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        // direct way to reverse string(strings are immutable in nature);
        // String reverse = new StringBuilder(s).reverse().toString();



        //2nd way(long) to reverse the array
        // char[] str = s.toCharArray();
        // int low = 0;
        // int high = str.length-1;

        // while(low < high){
        //     char temp = str[low];
        //     str[low] = str[high];
        //     str[high] = temp;

        //     low++;
        //     high--;
        // }

        // String reversed = new String(str);



        //Another way to revese the string by simply using the for loop

        String reversed = "";

        for(int i = s.length()-1 ; i >= 0 ; i--){
            reversed = reversed + s.charAt(i);
        }

        System.out.println(reversed);

    }
}