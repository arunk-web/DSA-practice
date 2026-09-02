import java.util.Scanner;
// you  have to convert all occurance of a with b and vice versa.

public class changeChar {
    public static String find(String str){
        char[] ch = str.toCharArray();

        for(int i = 0 ; i < ch.length ; i++){
            if(ch[i] == 'a'){
                ch[i] = 'b';
            }
            else if(ch[i] == 'b'){
                ch[i] = 'a';
            }
        }

        String ans = new String(ch);
        return ans;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        
        System.out.println(find(str));

    }
}
